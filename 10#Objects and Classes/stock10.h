
// 10.4

#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() { total_val = shares * share_val; }

	public:
		Stock(const std::string&, long, double);
		Stock();
		~Stock();
		void buy(long, double);
		void sell(long, double);
		void update(double);
		void show() const;

};

#endif


