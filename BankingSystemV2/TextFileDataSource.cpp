#include "stdafx.h"
#include <fstream>
#include <string>

using namespace std;
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
	
	// fill out function pointer array
	m_pfns[CUSTOMERS] = &TextFileDataSource::ConstructAndAddCustomer;
	m_pfns[BANK_CLERKS] = &TextFileDataSource::ConstructAndAddBankClerk;
	m_pfns[SAVINGS_ACCOUNTS] = &TextFileDataSource::ConstructAndAddSavingsAccount;
	m_pfns[CREDIT_CARD_ACCOUNTS] = &TextFileDataSource::ConstructAndAddCreditCardAccount;
	m_pfns[HOME_LOAN_ACCOUNTS] = &TextFileDataSource::ConstructAndAddHomeLoanAccount;
	m_pfns[WITHDRAWALS] = &TextFileDataSource::ConstructAndAddWithdrawalTransaction;
	m_pfns[DEPOSITS] = &TextFileDataSource::ConstructAndAddDepositTransaction;
	m_pfns[TRANSFERS] = &TextFileDataSource::ConstructAndAddTransferTransaction;

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
				(this->*m_pfns[nFile])(line);					// call appropriate fnc
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
	vector<string> accountIds = StringUtils::splitString(lineSplit[ACCOUNT_IDS], ';');

	// create customer
	Customer* c = new Customer
	(
		TypeConverter(lineSplit[USER_ID]),
		lineSplit[PASSWORD],
		lineSplit[NAME],
		lineSplit[ADDRESS],
		lineSplit[PHONE_NUMBER]
	);

	// add account ids
	vector<string>::iterator vit;
	for (vit = accountIds.begin(); vit != accountIds.end(); ++vit)
	{
		c->addAccount(TypeConverter(*vit));
	}

	_users.add(c->getUserId(), c);

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

	BankClerk bc
	(
		TypeConverter(lineSplit[USER_ID]),
		lineSplit[PASSWORD]
	);

	_users.add(bc.getUserId(), &bc);
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

	DebitAccount da
	(
		TypeConverter(lineSplit[ACCOUNT_ID]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		lineSplit[ACCOUNT_NAME],
		TypeConverter(lineSplit[INTEREST_RATE]),
		TypeConverter(lineSplit[BALANCE])
	);

	_accounts.add(da.getAccountId(), &da);

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
		LIMIT,
		NUM_FIELDS
	};

	vector<string> lineSplit = StringUtils::splitString(line, ',');

	CreditCardAccount ca
	(
		TypeConverter(lineSplit[ACCOUNT_ID]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		lineSplit[ACCOUNT_NAME],
		TypeConverter(lineSplit[INTEREST_RATE]),
		TypeConverter(lineSplit[BALANCE]),
		TypeConverter(lineSplit[LIMIT])
	);

	_accounts.add(ca.getAccountId(), &ca);

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

	// TODO Brad & Jeff: Dangerous....
	int nOption = TypeConverter(lineSplit[REPAYMENT_OPTION]);
	HomeLoanAccount::RepaymentOption option = static_cast<HomeLoanAccount::RepaymentOption>(nOption);

	HomeLoanAccount hla
	(
		TypeConverter(lineSplit[ACCOUNT_ID]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		lineSplit[ACCOUNT_NAME],
		TypeConverter(lineSplit[INTEREST_RATE]),
		TypeConverter(lineSplit[BALANCE]),
		lineSplit[PROPERTY_ADDRESS],
		option,
		TypeConverter(lineSplit[MIN_REPAYMENT])
	);

	_accounts.add(hla.getAccountId(), &hla);

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
	Date dt(lineSplit[DATE], '-');

	Withdrawal w
	(
		TypeConverter(lineSplit[ID]),
		TypeConverter(lineSplit[AMOUNT]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		dt,
		TypeConverter(lineSplit[ACCOUNT_ID])
	);

	_transactions.add(w.getId(), &w);

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
	Date dt(lineSplit[DATE], '-');

	Deposit d
	(
		TypeConverter(lineSplit[ID]),
		TypeConverter(lineSplit[AMOUNT]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		dt,
		TypeConverter(lineSplit[ACCOUNT_ID])
	);

	_transactions.add(d.getId(), &d);

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
	Date dt(lineSplit[DATE], '-');

	Transfer t
	(
		TypeConverter(lineSplit[ID]),
		TypeConverter(lineSplit[AMOUNT]),
		TypeConverter(lineSplit[CUSTOMER_ID]),
		dt,
		TypeConverter(lineSplit[TO_ACCOUNT_ID]),
		TypeConverter(lineSplit[FROM_ACCOUNT_ID])
	);

	_transactions.add(t.getId(), &t);

}

// --------------------------------------------------------------------------------------------- //


