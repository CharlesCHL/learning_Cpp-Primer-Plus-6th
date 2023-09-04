


#include <iostream>
#include <cmath>

#include "coordin.h"

using namespace std;

polar_st rect_to_polar(rect_st xypos)
{
	polar_st answer;
	
	answer.distance = 
		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);

	answer.angle = atan2(xypos.y, xypos.x);

	return answer;
}

void show_polar(polar_st dapos)
{
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance << endl;
	cout << "angle = " << dapos.angle * Rad_to_deg << " degrees" << endl;

	return ;
}










