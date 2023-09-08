
// 10.8

#include <iostream>

#include "stock20.h"

Stock::Stock(const std::string& co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		std::cout << "Number of shares can't be negative, "
				  << company << " share set to 0.\n";
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;

	set_tot();
}

Stock::Stock()
{
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::~Stock()
{
//	std::cout << "Bye " << company << ".\n";
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative, transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}

	return ;
}

void Stock::sell(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative, transaction is aborted.\n";
	}
	else if(num > shares)
	{
		std::cout << "You can't sell more than you have, transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
	return ;
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
	return ;
}

void Stock::show() const
{
	std::cout << "********************************************\n";
	std::cout << "Company: \t" << company << std::endl;
	std::cout << "Shares: \t" << shares << std::endl;
	std::cout << "Share price: \t$" << share_val << std::endl;
	std::cout << "Total worth: \t$" << total_val << std::endl;
	return ;
}

const Stock& Stock::topval(const Stock& s) const 
{
	if(s.total_val > total_val)
		return s;
	else 
		return *this;
}


