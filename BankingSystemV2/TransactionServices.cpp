#include "StdAfx.h"

DataSource* TransactionServices::_ds = NULL;
TransactionServices* TransactionServices::_ts = NULL;
PhraseGenerator* TransactionServices::_pg = NULL;

// --------------------------------------------------------------------------------------------- //
// construction / instance retrieval

TransactionServices::TransactionServices(void)
{
	_pg = PhraseGenerator::instance();
}

TransactionServices* TransactionServices::instance()
{
	if (_ts == NULL)
	{
		_ts = new TransactionServices();
	}

	return _ts;
}

// --------------------------------------------------------------------------------------------- //
// member methods

Transaction* TransactionServices::getTransaction(int id)
{
	return _ds->getTransaction(id);
}

double TransactionServices::getPreTransactionBalance(int accId)
{
	Account* acc = _ds->getAccount(accId);
	return acc->getBalance();
}

list<Transaction*> TransactionServices::getTransactionsForAccount(int accId)
{
	return _ds->getTransactionsForAccount(accId);
}

void TransactionServices::revert(Transaction* t)
{
	Deposit* d = dynamic_cast<Deposit*>(t);
	if (d)
	{
		_ds->getAccount(d->getAccountId())->setBalance(d->getPreTransactionBalance());
		return;
	}

	Withdrawal* w = dynamic_cast<Withdrawal*>(t);
	if (w)
	{
		_ds->getAccount(w->getAccountId())->setBalance(d->getPreTransactionBalance());
		return;
	}

}

int TransactionServices::getNextTransactionId()
{
	return _pg->getDigitPhrase(ID_LENGTH);
}

void TransactionServices::deposit(int accId, double amount)
{
	_ds->getAccount(accId)->deposit(amount);
}

void TransactionServices::withdraw(int accId, double amount)
{
	DebitAccount* da = dynamic_cast<DebitAccount*>(_ds->getAccount(accId));
	da->withdraw(amount);
}

void TransactionServices::saveTransaction(Transaction* t)
{
	_ds->addTransaction(t);
}

Date TransactionServices::getCurrentDate(char delim)
{
	time_t t = time(0);
	std::string str;
	struct tm * now = localtime( & t );
	stringstream ss;
	ss << (now->tm_mday) << delim;
	ss << now->tm_mon + 1 << delim;
	ss << now->tm_year + 1900 << delim;
	getline(ss, str);

	Date dt(str, delim);
	return dt;
}

