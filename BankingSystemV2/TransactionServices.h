#pragma once

class TransactionServices
{
public:
	
	static TransactionServices* instance();
	static Transaction* getTransaction(int id);

	static void setDataSource(DataSource* ds){_ds = ds;}

private:
	TransactionServices(void);
	static TransactionServices* _ts;
	static DataSource* _ds;
};

