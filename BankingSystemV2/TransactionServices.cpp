#include "StdAfx.h"
#include "TransactionServices.h"

DataSource* TransactionServices::_ds = NULL;
TransactionServices* TransactionServices::_ts = NULL;

TransactionServices::TransactionServices(void)
{
}

TransactionServices* TransactionServices::instance()
{
	if (_ts == NULL)
	{
		_ts = new TransactionServices();
	}

	return _ts;
}

Transaction* TransactionServices::getTransaction(int id)
{
	return _ds->getTransaction(id);
}

