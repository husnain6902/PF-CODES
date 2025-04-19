#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	string file = "haseeb.txt";
	int twords = fun(file);
	cout << "Total Words in Paragraph" << twords;


}
int  fun(const string& x)
{
	string words;
	int wc = 0;

	ifstream fin(x);
	if (fin.is_open())
	{
		while (fin >> words)
		{


			wc++;

		}
	}
	else
	{
		cout << "Error opening file ";
	}
	fin.close();
	return wc;

}