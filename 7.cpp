#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int number, num, final;
	
	loop:
	cout << "Enter a number:" << " ";
	cin >> number;
	
	for (num=1; num <= number; ++ num)
		{
			final += num;
		}
	
		if (number >0)
		{
			cout << "The sum of all whole numbers from 1 to your chosen number is" << " " << final << ".";
			final = 0;
			cout << "\n"; 
			goto loop;
		}	

		else if (number <=0){
			cout << "Thank You!";
		}
	
	_getch();
	return 0;
}


