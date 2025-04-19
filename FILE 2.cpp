#include<iostream>
using namespace std;
int sumarray(int arr[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {

	int arr[5];
	cout << "enter 5 integers:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int total = sumarray(arr);
	cout << "sum of elements of array are:" << total << endl;

	return 0;
}