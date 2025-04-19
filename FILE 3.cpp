#include<iostream>
#include<string>
using namespace std;
int countvowal(string str) {
	int vowal = 0;
	int i = 0;
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			vowal++;
		}
	}
	return vowal;
}
int main() {

	string x;
	cout << "enter string:" << endl;
	getline(cin, x);

	int tv = countvowal(x);
	cout << "number of vowal " << tv;
	return 0;
}