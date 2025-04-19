#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void writetofile(string txt) {
    ofstream file("input.txt");
    if (!file) {
        cout << "error opening file:";
        return;
    }
    file << txt;
    file.close();
    cout << "successfully write";
}
int main() {
    string input;
    cout << "enter your string:" << endl;
    getline(cin, input);
    writetofile(input);

    return 0;
}