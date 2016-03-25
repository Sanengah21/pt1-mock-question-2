#include "Time.h"
#include <iostream>

using namespace std;


Time::Time(int hours_in, int mins_in)
{
	set(hours_in, mins_in);
	
}

void Time::set(int hours_in, int mins_in)
{
	if ((hours_in >= 0 && hours_in < 24) && (mins_in >= 0 && mins_in < 60)){
		hours = hours_in;
		minutes = mins_in;
	}
	else {
		cout << "You must have entered an invalid input" << endl;
	}
}

void Time::get(int &hours_in, int &mins_in)
{
	 hours_in = hours;
	mins_in = minutes;

}

Time::~Time()
{
}
