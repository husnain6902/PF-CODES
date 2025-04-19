#include <iostream>
using namespace std;


void printCharactar(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    char Array[] = "Husnain";
    int size = 8;

    printCharactar(Array, size - 1);

    return 0;
}