#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int num, num1, first, second;
	
	cout << "Multiplication Table by" << " ";
	cin >> num;
	
	num1 = 1;
	while ( num1 <=10)
	{
		cout << num1 << " " << "*" << " " << num << " " << "=" << " " << (num1*num) << "\n";
		++num1;
	}
	_getch();
	return 0;
}


