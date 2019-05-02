#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three numbers:" << endl;
	
	cout << "First number:" << " "; 
	cin >> a;
	
	cout << "Second number:" << " ";
	cin >> b;
	
	cout << "Third number:" << " ";
	cin >> c;
	
	if (a > b && a > c)
	{
		cout << "The largest number among the three is" << " " << a << ".";
	}
	else if (b > a && b > c)
	{
		cout << "The largest number among the three is" << " " << b << ".";
	}
	else
	{
		cout << "The largest number among the three is" << " " << c << ".";
	}
	_getch();
	return 0;
}
