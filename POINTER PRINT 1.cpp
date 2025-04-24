//THE FOLLOWING CODE WILL TAKE 10 INTEGERS AS INPUT AND THEN DISPLAY ONLY 1 INSTEAD OF INPUT NUMBERS.
#include<iostream>
using namespace std;

int main()
{
	int a[10], i;

	cout << "ENTER 10 INTEGERS: " << endl;
	int* ptr = &a[0];

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		*(ptr + i) = 1;
	}

	cout << "\n VALUES OF ARRAY IS:" << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << endl << *(ptr + i);
	}

	return 0;









}