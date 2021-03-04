#include "Time.h"
#include<iostream>

using namespace std;

int main()
{
	Time::Triad g, f;
	cout << "Triad 1 : " << endl << endl;
	g.Read();
	cout << "Triad 2 : " << endl << endl;
	f.Read();
	g.Display(g, f);
	g.Equals(g, f);

	Time tim;
	do
	{
		tim.Read();

	} while (!tim.Equal());
	tim.Display();

	return 0;
}
