#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;
int main ()
{
	int x, y;
	double z, V;
	z= 2.5;
	cout << "Enter two integers!" << endl;
	
	cout << "First integer:" << " "; 
	cin >> x;
	
	cout << "Second integer:" << " ";
	cin >> y;
	
	switch (x)
	{
		case 1:
			if (1 < y && y < 5)
			{
				V = x*y*z;
			}
			else if (y >= 5)
			{
				V = x + y/z; 
			}
			else
			{
				V = x + y + z;
			}
		break;
		
		case 2:
			if (y <= 5)
			{
				V = abs((x - y) / (z));
			}
			else
			{
				V = x - sqrt(y+z);
			}
		break;
		
		default:
		V = x + y + z;
	}
	
	cout << "V =" << " " << setprecision(2) << V << endl;
	
	_getch();
	return 0;
}

