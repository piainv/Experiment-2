#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int hours, add, addtl;
	char package;
	float amount;
	
	cout << "Enter package type purchased:" << " ";
	cin >> package;
	
	cout << "Enter number of hours used:" << " ";
	cin >> hours;
			
    switch (package)
		{
			case 'A':
					if (hours <= 10)
				{
					amount = 995;
					cout << "Your amount due costs:" << " " << "P" << amount << endl;
				}
				    else
				{
					add = hours - 10;
					addtl = add*20;
					amount = 995 + addtl;
					cout << "Your amount due costs:" << " " << "P" << amount << endl;
				}
			break;
			case 'B':
					if (hours <= 20)
				{
					amount = 1495;
					cout << "Your amount due costs:" << " " << "P" << amount << endl;
				}
				else
				{
					add = hours - 20;
					addtl = add*10;
					amount = 1495 + addtl;
					cout << "Your amount due costs:" << " " << "P" << amount << endl;
				}
			break;
			case 'C':
					amount = 1995;
					cout << "Your amount due costs:" << " " << "P" << amount << endl;
			break;
		    default:
			        cout << "Please enter package type only: A, B, or C.";
        }
    _getch();
	return 0;
}
