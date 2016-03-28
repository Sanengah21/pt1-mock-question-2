#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
	friend ostream &operator << (ostream &, Time &);

 public:
	Time(int hours, int mins);
	void set(int hours, int mins);
	void get(int &hours, int &mins);
	~Time();

private:
	int hours;
	int minutes;
};

#endif
