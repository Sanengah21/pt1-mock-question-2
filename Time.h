#pragma once
class Time
{
	friend ostream &operator <<(ostream&, Time);
public:
	Time(int hours, int mins);
	void set(int hours, int mins);
	void get(int &hours, int &mins);
	~Time();

private:
	int hours;
	int minutes;
};

