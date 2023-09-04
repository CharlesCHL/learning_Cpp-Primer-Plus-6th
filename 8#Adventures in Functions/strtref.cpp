

#include <iostream>
#include <string>


using namespace std;

struct free_throws_st
{
	string name;
	int made;
	int attempts;	
	float percent;
};

void set_pc(free_throws_st&);

void display(const free_throws_st&);

free_throws_st& accumulate(free_throws_st&, const free_throws_st&);

int main(void)
{
	free_throws_st one = {"Rick", 13, 14};
	free_throws_st two = {"Jack", 10, 16};
	free_throws_st three = {"Jerry", 7, 9};
	free_throws_st four = {"Jason", 5, 9};
	free_throws_st five = {"Micheal", 6, 14};
	free_throws_st team = {"Class 6", 0, 0};

	free_throws_st dup;

	
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	display(accumulate(team, two));

	display(accumulate(accumulate(accumulate(team, three), four), five));

	dup = team;
	display(team);
	display(dup);
	return 0;

}

void set_pc(free_throws_st& ft)
{
	if(ft.attempts != 0)
		ft.percent = float(ft.made) / float(ft.attempts) * 100.0;

	return ;
}

void display(const free_throws_st& ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "Made: " << ft.made << "\t";
	cout << "Attempts: " << ft.attempts << "\t";
	cout << "Percent: " << ft.percent << endl;

	return ;
}

free_throws_st& accumulate(free_throws_st& target, const free_throws_st& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	
	return target;
}






