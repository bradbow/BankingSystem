#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
using namespace System;
IdMap<int, User*> TextFileDataSource::_users;
IdMap<int, Account*> TextFileDataSource::_accounts;
IdMap<int, Transaction*> TextFileDataSource::_transactions;
TextFileDataSource* TextFileDataSource::_ds = NULL;

string fileNames [TextFileDataSource::NUMBER_OF_FILES] = 
	{
		"Customers.txt", "BankClerks.txt", "SavingsAccounts.txt", "CreditAccounts.txt", 
		"HomeLoanAccounts.txt", "WithdrawalTransactions.txt", "DepositTransactions.txt", 
		"TransferTransactions.txt"
	};
// --------------------------------------------------------------------------------------------- //
// constructors / destructors / instance retrieval

TextFileDataSource* TextFileDataSource::getInstance()
{

	if (_ds == NULL)
	{
		_ds = new TextFileDataSource();
	}

	return _ds;

}

TextFileDataSource::TextFileDataSource()
{
	
	// fill out function pointer arrays
	m_pfnsLoad[CUSTOMERS] = &TextFileDataSource::ConstructAndAddCustomer;
	m_pfnsLoad[BANK_CLERKS] = &TextFileDataSource::ConstructAndAddBankClerk;
	m_pfnsLoad[SAVINGS_ACCOUNTS] = &TextFileDataSource::ConstructAndAddSavingsAccount;
	m_pfnsLoad[CREDIT_CARD_ACCOUNTS] = &TextFileDataSource::ConstructAndAddCreditCardAccount;
	m_pfnsLoad[HOME_LOAN_ACCOUNTS] = &TextFileDataSource::ConstructAndAddHomeLoanAccount;
	m_pfnsLoad[WITHDRAWALS] = &TextFileDataSource::ConstructAndAddWithdrawalTransaction;
	m_pfnsLoad[DEPOSITS] = &TextFileDataSource::ConstructAndAddDepositTransaction;
	m_pfnsLoad[TRANSFERS] = &TextFileDataSource::ConstructAndAddTransferTransaction;

	m_pfnsPersist[CUSTOMERS] = &TextFileDataSource::persistCustomers;
	m_pfnsPersist[BANK_CLERKS] = &TextFileDataSource::persistBankClerks;
	m_pfnsPersist[SAVINGS_ACCOUNTS] = &TextFileDataSource::persistSavingsAccounts;
	m_pfnsPersist[CREDIT_CARD_ACCOUNTS] = &TextFileDataSource::persistCredidCardAccounts;
	m_pfnsPersist[HOME_LOAN_ACCOUNTS] = &TextFileDataSource::persistHomeLoanAccounts;
	m_pfnsPersist[WITHDRAWALS] = &TextFileDataSource::persistWithdrawals;
	m_pfnsPersist[DEPOSITS] = &TextFileDataSource::persistDeposits;
	m_pfnsPersist[TRANSFERS] = &TextFileDataSource::persistTransfers;

	IdMap<int, User*> _users;
	IdMap<int, Account*> _accounts;
	IdMap<int, Transaction*> _transactions;

}

// --------------------------------------------------------------------------------------------- //
// member methods

void TextFileDataSource::loadData()
{
	for (int nFile = 0; nFile < NUMBER_OF_FILES; nFile++)
	{
		// TODO assert on array size
		std::ifstream rfsFile;
		rfsFile.open(fileNames[nFile].c_str());
		string line;

		if (rfsFile)
		{
			// read lines and create objects
			while (!rfsFile.eof())
			{
				getline(rfsFile, line);
				(this->*m_pfnsLoad[nFile])(line);					// call appropriate fnc
			}
		}
		else 
		{
			// TODO Brad: file does not exist - exception?
		}

		rfsFile.close();
	}
}

void TextFileDataSource::persistData()
{
	persistCustomers();
}

// --------------------------------------------------------------------------------------------- //
// helper / utility methods

void TextFileDataSource::ConstructAndAddCustomer(string line)
{
	enum 
	{
		USER_ID,
		PASSWORD,
		NAME,
		ADDRESS,
		PHONE_NUMBER,
		ACCOUNT_IDS,
		NUM_FIELDS
	};
	
	vector<string> lineSplit = StringUtils::splitString(line, ',');
	if (lineSplit.size() == NUM_FIELDS)
	{
		vector<string> accountIds = StringUtils::splitString(lineSplit[ACCOUNT_IDS], ';');

		// create customer
		Customer* c = new Customer 
		(
			TypeConv(lineSplit[USER_ID]),
			lineSplit[PASSWORD],
			lineSplit[NAME],
			lineSplit[ADDRESS],
			lineSplit[PHONE_NUMBER]
		);

		// add account ids
		vector<string>::iterator vit;
		for (vit = accountIds.begin(); vit != accountIds.end(); ++vit)
		{
			c->addAccount(TypeConv(*vit));
		}

		_users.add(c->getUserId(), c);

	}
	else 
	{
		// TODO exception for corrupt file
	}

}

void TextFileDataSource::ConstructAndAddBankClerk(string line)
{
	enum
	{
		USER_ID,
		PASSWORD,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		BankClerk* bc = new BankClerk
		(
			TypeConv(lineSplit[USER_ID]),
			lineSplit[PASSWORD]
		);

		_users.add(bc->getUserId(), bc);
	}
	else
	{
		// TODO eception
	}
}

void TextFileDataSource::ConstructAndAddSavingsAccount(string line)
{
	enum
	{
		ACCOUNT_ID,
		//CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		TRANSACTION_IDS,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		vector<string> transIds = StringUtils::splitString(lineSplit[TRANSACTION_IDS], ';');
	
		SavingsAccount* sa = new SavingsAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			//TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE])
		);

		vector<string>::iterator vit;
		for (vit = transIds.begin(); vit != transIds.end(); ++vit)
		{
			sa->addTransaction(TypeConv(*vit));
		}

		_accounts.add(sa->getAccountId(), sa);
	}
	else
	{
		// TODO EXCEPTION
	}

}

void TextFileDataSource::ConstructAndAddCreditCardAccount(string line)
{
	enum
	{
		ACCOUNT_ID,
		//CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		TRANSACTION_IDS,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		vector<string> transIds = StringUtils::splitString(lineSplit[TRANSACTION_IDS], ';');
	
		SavingsAccount* sa = new SavingsAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			//TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE])
		);

		vector<string>::iterator vit;
		for (vit = transIds.begin(); vit != transIds.end(); ++vit)
		{
			sa->addTransaction(TypeConv(*vit));
		}

		_accounts.add(sa->getAccountId(), sa);
	}
	else
	{
		// TODO EXCEPTION
	}
}

void TextFileDataSource::ConstructAndAddHomeLoanAccount(string line)
{
	enum
	{
		ACCOUNT_ID,
		//CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		PROPERTY_ADDRESS,
		REPAYMENT_OPTION,
		MIN_REPAYMENT,
		TRANSACTION_IDS,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		// TODO Brad & Jeff: Dangerous....
		int nOption = TypeConv(lineSplit[REPAYMENT_OPTION]);
		HomeLoanAccount::RepaymentOption option = static_cast<HomeLoanAccount::RepaymentOption>(nOption);

		vector<string> transIds = StringUtils::splitString(lineSplit[TRANSACTION_IDS], ';');

		HomeLoanAccount* hla = new HomeLoanAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			//TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE]),
			lineSplit[PROPERTY_ADDRESS],
			option,
			TypeConv(lineSplit[MIN_REPAYMENT])
		);

		vector<string>::iterator vit;
		for (vit = transIds.begin(); vit != transIds.end(); ++vit)
		{
			hla->addTransaction(TypeConv(*vit));
		}

		_accounts.add(hla->getAccountId(), hla);
	}
	else
	{
		// TODO EXCEPTION
	}
}

void TextFileDataSource::ConstructAndAddWithdrawalTransaction(string line)
{

	enum
	{
		ID,
		AMOUNT,
		CUSTOMER_ID,
		DATE,
		ACCOUNT_ID,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');
	if (lineSplit.size() == NUM_FIELDS)
	{
		Date dt(lineSplit[DATE], '-');

		Withdrawal* w = new Withdrawal
		(
			TypeConv(lineSplit[ID]),
			TypeConv(lineSplit[AMOUNT]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			dt,
			TypeConv(lineSplit[ACCOUNT_ID])
		);

		_transactions.add(w->getId(), w);
	}
	else
	{
		// TODO EXCEPTION
	}
}

void TextFileDataSource::ConstructAndAddDepositTransaction(string line)
{

	enum
	{
		ID,
		AMOUNT,
		CUSTOMER_ID,
		DATE,
		ACCOUNT_ID,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		Date dt(lineSplit[DATE], '-');

		Deposit* d = new Deposit
		(
			TypeConv(lineSplit[ID]),
			TypeConv(lineSplit[AMOUNT]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			dt,
			TypeConv(lineSplit[ACCOUNT_ID])
		);

		_transactions.add(d->getId(), d);
	}
	else
	{
		// TODO EXCEPTION
	}
}

void TextFileDataSource::ConstructAndAddTransferTransaction(string line)
{

	enum
	{
		ID,
		AMOUNT,
		CUSTOMER_ID,
		DATE,
		TO_ACCOUNT_ID,
		FROM_ACCOUNT_ID,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		Date dt(lineSplit[DATE], '-');

		Transfer* t = new Transfer
		(
			TypeConv(lineSplit[ID]),
			TypeConv(lineSplit[AMOUNT]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			dt,
			TypeConv(lineSplit[TO_ACCOUNT_ID]),
			TypeConv(lineSplit[FROM_ACCOUNT_ID])
		);

		_transactions.add(t->getId(), t);
	}
	else
	{
		// TODO EXCEPTION
	}

}

void TextFileDataSource::persistCustomers()
{
	
	std::ofstream outputFile;
	std::string fileName = "Customers.txt";
	outputFile.open(fileName.c_str());

	map<int, User*>::iterator mit;
	map<int, User*> userMap = _users.getMap();
	int count = 0;
	Customer* cp;
	User* up;
	for (mit = userMap.begin(); mit != userMap.end(); mit++)
	{
		up = mit->second;
		cp = dynamic_cast<Customer*>(up);
		if (cp)
		{
			std::string str = cp->toString();
			outputFile << str << endl;
		}

		count++;
	}

	outputFile.close();

}

void TextFileDataSource::persistBankClerks()
{

}

void TextFileDataSource::persistSavingsAccounts()
{

}

void TextFileDataSource::persistCredidCardAccounts()
{

}

void TextFileDataSource::persistHomeLoanAccounts()
{

}

void TextFileDataSource::persistWithdrawals()
{

}

void TextFileDataSource::persistDeposits()
{

}

void TextFileDataSource::persistTransfers()
{

}

// --------------------------------------------------------------------------------------------- //

