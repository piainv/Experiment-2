#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int row, col, star1, star2;
	
	cout << "Input the number of rows and columns you like: \n";
	cout << "Row/s:" << " ";
	cin >> row;
	cout << "Column/s:" << " ";
	cin >> col;
	
	for (star1 = 1; star1 <= row; star1++)
	{
		for (star2 = 1; star2 <= col; star2++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	_getch();
	return 0;
}


