#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int number, num1= 0, num2 = 1, seq;
	
	cout << "The next 20 Fibonacci numbers after 0 and 1 are: \n";
	
	for (number = 1; number <=19; number++)
	{
		seq = num1 + num2;
		num1 = num2;
		num2 = seq;
		
		cout << seq << "," << " ";
	}
		for (; number ==20; number++)
		{
		seq = num1 + num2;
		num1 = num2;
		num2 = seq;
		
		cout << seq << ".";
		}
	
	_getch();
	return 0;
}


