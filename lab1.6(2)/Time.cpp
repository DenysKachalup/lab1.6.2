#include "Time.h"
#include<iostream>

using namespace std;

void Time::setF(int value)
{
	triad.setF(value);
}

void Time::setS(int value)
{
	triad.setS(value);
}

void Time::setT(int value)
{
	triad.setT(value);
}

void Time::Init1(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}
void Time::Read()
{
	int value1, value2, value3;

	cout << "Hour: "; cin >> value1;
	cout << "Minute: "; cin >> value2;
	cout << "Seconds: "; cin >> value3;
	cout << endl;

	Init1(value1, value2, value3);
}
string Time::toString1() const
{
	stringstream sout;
	sout << getF() << "god " << getS() << "hv " << getT() << "s \t\t" << getF() << " : "
		<< getS() << " : " << getT() << endl;
	return sout.str();
}
void Time::Display() const
{
	cout << toString1() << endl;
}

bool Time::Equal()
{
	if ((triad.getF() >= 0 && triad.getF() <= 23) &&
		(triad.getS() >= 0 && triad.getS() <= 59) && (triad.getT() >= 0 && triad.getT() <= 59))
		return true;
	else
		return false;
}
void Time::Triad::setF(int value)
{
	first = value;
}

void Time::Triad::setS(int value)
{
	second = value;
}

void Time::Triad::setT(int value)
{
	third = value;
}

void Time::Triad::Init(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}

void Time::Triad::Read()
{
	int value1, value2, value3;

	cout << "first: "; cin >> value1;
	cout << "second: "; cin >> value2;
	cout << "third: "; cin >> value3;
	cout << endl;

	Init(value1, value2, value3);
	cout << endl;
}

string Time::Triad::toString() const
{
	stringstream sout;
	sout << "toStringTriad\nfirst = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT() << endl;
	return sout.str();
}

void Time::Triad::Display(Triad g, Triad f) const
{
	cout << g.toString() << endl;
	cout << f.toString() << endl;
}
bool Time::Triad::Equals(Triad t1, Triad t2)
{
	if ((t1.first > t2.first || t1.first == t2.first) &&
		(t1.second > t2.second || t1.first == t2.first) &&
		t1.second == t2.second && t1.third > t2.third)
	{
		cout << "triad t1 > triad t2" << endl << endl;
		return true;
	}
	else
	{
		cout << "triad t1 < triad t2" << endl << endl;
		return false;
	}
}
