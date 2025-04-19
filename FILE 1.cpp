#include<iostream>
using namespace std;
void print(int arr[5]) {

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " " << endl;
	}
}


int main() {
	int arr[5];
	cout << "enter 5 integers:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	cout << "elements of array are:" << endl;
	print(arr);
	return 0;
}