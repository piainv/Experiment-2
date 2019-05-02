#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
	float bill, demand, cons, previous, recents, unpaid, bill2;
	demand = 35;
	cons = 1.10;

	cout << "Meter reading (in gallons) taken recently was:" << " ";
	cin >> recents;
	
	cout << "Meter reading (in gallons) taken in the previous month was:" << " ";
	cin >> previous;
	
	bill = demand + cons*(recents-previous) + unpaid;
			
	cout << "Your unpaid balance costs:" << " " << "P";
	cin >> unpaid;
	
	if (unpaid > 0)
	{
		bill2 = bill + 20 + unpaid;
		cout << "Your bill including the unpaid balance & the late additional charge costs:" << " " << "P" << bill2;
	}
	else
	{		
		cout << "Your bill costs:" << " " << "P" << bill;
	}
	
	_getch();
	return 0;
}
