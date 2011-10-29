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
		"TransferTransactions.txt", "Rates.txt"
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
	m_pfnsLoad[RATES] = &TextFileDataSource::SetRates;

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
	persistUsers();
	persistAccounts();
	persistTransactions();
	persistRates();
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
		NUM_FIELDS
	};
	
	vector<string> lineSplit = StringUtils::splitString(line, ',');
	if (lineSplit.size() == NUM_FIELDS)
	{

		// create customer
		Customer* c = new Customer 
		(
			TypeConv(lineSplit[USER_ID]),
			lineSplit[PASSWORD],
			lineSplit[NAME],
			lineSplit[ADDRESS],
			lineSplit[PHONE_NUMBER]
		);

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
		CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
	
		SavingsAccount* sa = new SavingsAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE])
		);

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
		CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		OVERDRAFT_LIMIT,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
	
		CreditCardAccount* cca = new CreditCardAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE]),
			TypeConv(lineSplit[OVERDRAFT_LIMIT])
		);

		_accounts.add(cca->getAccountId(), cca);
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
		CUSTOMER_ID,
		ACCOUNT_NAME,
		INTEREST_RATE,
		BALANCE,
		PROPERTY_ADDRESS,
		REPAYMENT_OPTION,
		MIN_REPAYMENT,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	if (lineSplit.size() == NUM_FIELDS)
	{
		// TODO Brad & Jeff: Dangerous....
		int nOption = TypeConv(lineSplit[REPAYMENT_OPTION]);
		HomeLoanAccount::RepaymentOption option = static_cast<HomeLoanAccount::RepaymentOption>(nOption);

		HomeLoanAccount* hla = new HomeLoanAccount
		(
			TypeConv(lineSplit[ACCOUNT_ID]),
			TypeConv(lineSplit[CUSTOMER_ID]),
			lineSplit[ACCOUNT_NAME],
			TypeConv(lineSplit[INTEREST_RATE]),
			TypeConv(lineSplit[BALANCE]),
			lineSplit[PROPERTY_ADDRESS],
			option,
			TypeConv(lineSplit[MIN_REPAYMENT])
		);

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

void TextFileDataSource::SetRates(string line)
{
	enum
	{
		SAVINGS_RATE,
		CREDIT_CARD_RATE,
		HOME_LOAN_RATE,
		NUM_FIELDS
	};
	
	vector<string> lineSplit = StringUtils::splitString(line, ',');
	if (lineSplit.size() == NUM_FIELDS)
	{
		_savingsRate = TypeConv(lineSplit[SAVINGS_RATE]);
		_creditCardRate = TypeConv(lineSplit[CREDIT_CARD_RATE]);
		_homeLoanRate = TypeConv(lineSplit[HOME_LOAN_RATE]);
	}

}

void TextFileDataSource::persistUsers()
{
	
	std::ofstream customerFile;
	std::ofstream bankClerkFile;
	customerFile.open(fileNames[CUSTOMERS].c_str());
	bankClerkFile.open(fileNames[BANK_CLERKS].c_str());

	User* up; Customer* cp; BankClerk* bc;
	
	map<int, User*>::iterator mit;
	for (mit = _users.begin(); mit != _users.end(); mit++)
	{
		up = mit->second;
		cp = dynamic_cast<Customer*>(up);
		if (cp)
		{
			std::string str = cp->toString();
			customerFile << str << endl;
			return;
		}

		bc = dynamic_cast<BankClerk*>(up);
		if (bc)
		{
			std::string str = cp->toString();
			bankClerkFile << str << endl;
			return;
		}

	}

	customerFile.close();
	bankClerkFile.close();

}

void TextFileDataSource::persistAccounts()
{

	std::ofstream savingsFile;
	std::ofstream creditFile;
	std::ofstream homeLoanFile;
	savingsFile.open(fileNames[SAVINGS_ACCOUNTS].c_str());
	creditFile.open(fileNames[CREDIT_CARD_ACCOUNTS].c_str());
	homeLoanFile.open(fileNames[HOME_LOAN_ACCOUNTS].c_str());

	Account* ap; SavingsAccount* sp; CreditCardAccount* ccp; HomeLoanAccount* hlp;
	
	map<int, Account*>::iterator mit;
	for (mit = _accounts.begin(); mit != _accounts.end(); mit++)
	{
		ap = mit->second;
		sp = dynamic_cast<SavingsAccount*>(ap);
		if (sp)
		{
			std::string str = sp->toString();
			savingsFile << str << endl;
			return;
		}

		ccp = dynamic_cast<CreditCardAccount*>(ap);
		if (ccp)
		{
			std::string str = ccp->toString();
			creditFile << str << endl;
			return;
		}

		hlp = dynamic_cast<HomeLoanAccount*>(ap);
		if (hlp)
		{
			std::string str = hlp->toString();
			homeLoanFile << str << endl;
			return;
		}

	}

	savingsFile.close();
	creditFile.close();
	homeLoanFile.close();

}

void TextFileDataSource::persistTransactions()
{

	std::ofstream deposits;
	std::ofstream withdrawalFile;
	std::ofstream transfersFile;

	deposits.open(fileNames[DEPOSITS].c_str());
	withdrawalFile.open(fileNames[WITHDRAWALS].c_str());
	transfersFile.open(fileNames[TRANSFERS].c_str());

	Transaction* tp; Deposit* dp; Withdrawal* wp; Transfer* trp;

	map<int, Transaction*>::iterator mit;
	for (mit = _transactions.begin(); mit != _transactions.end(); mit++)
	{
		tp = mit->second;
		dp = dynamic_cast<Deposit*>(tp);
		if (dp)
		{
			std::string str = dp->toString();
			deposits << str << endl;
			return;
		}

		wp = dynamic_cast<Withdrawal*>(tp);
		if (wp)
		{
			std::string str = wp->toString();
			withdrawalFile << str << endl;
			return;
		}

		trp = dynamic_cast<Transfer*>(tp);
		if (trp)
		{
			std::string str = trp->toString();
			transfersFile << str << endl;
			return;
		}

	}

	deposits.close();
	withdrawalFile.close();
	transfersFile.close();

}

void TextFileDataSource::persistRates()
{
	std::ofstream ratesFile;
	ratesFile.open(fileNames[RATES].c_str());

	ratesFile << _savingsRate << ",";
	ratesFile << _creditCardRate << ",";
	ratesFile << _homeLoanRate;

	ratesFile.close();
}



// --------------------------------------------------------------------------------------------- //

