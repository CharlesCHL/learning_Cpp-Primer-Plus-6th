
// 10.7

#ifndef STOCK20_H_
#define STOCK20_H_

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
		const Stock& topval(const Stock&) const; 
};

#endif


