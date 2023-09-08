
// 10.9

#include <iostream>

#include "stock20.h"

const int STKS = 4;

int main()
{	
	Stock stocks[STKS] = 
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Mono", 130, 3.25),
		Stock("Fleep", 60, 6.5)
	};
	std::cout << "Stock holding: \n";
	for(int i = 0; i < STKS; i++)
	{
		stocks[i].show();
	}

	Stock* max = stocks;
	for(int i = 1; i < STKS; i++)
	{
		*max = max->topval(stocks[i]);
	}

	std::cout << "\nMost valuable holding:\n";
	max->show();

	return 0;
}


