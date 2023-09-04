

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar_st
{
	double distance;
	double angle;
};

struct rect_st
{
	double x;
	double y;
};

polar_st rect_to_polar(rect_st);

void show_polar(polar_st);


#endif





