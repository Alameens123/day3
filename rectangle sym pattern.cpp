#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	char ch;
	
	cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
	cin >> rows;
	
	cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
	cin >> columns;
	
	cout << "\nPlease Enter Any Symbol to Print  =  ";
	cin >> ch;	
		
	cout << "\n-----Rectangle Pattern-----\n";
	for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
		{
           cout << ch;
        }
        cout << "\n";
	}
 	return 0;
}
