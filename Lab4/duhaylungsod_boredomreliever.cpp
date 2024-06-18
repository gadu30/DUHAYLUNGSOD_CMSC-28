#include <iostream>

using namespace std;

void progDesc(){
    cout << "                       PROGRAM DESCRIPTION" << endl;
    cout << "This program asks the user to input and integer and converts it to its binary equivalent." << endl;
    cout << "               Programmer: Gabriel I. Duhaylungsod" << endl;
    cout << "                      Date: April 26, 2024" << endl;
    cout << "             Subject Number: CMSC 28 - Decimal to Binary" << endl;
}

void readdata(int& num) {
    cout << "Enter an integer: " << endl;
    cin >> num;
}

string intToBinary(int number) {
    if (number == 0) return "0"; // Special case for zero

    string binary = "";
    while (number > 0) {
        binary = (number % 2 == 0 ? "0" : "1") + binary;
        number /= 2;
    }
    return binary;
}

void output(int num, string binary) {
    cout << "The binary equivalent of " << num << " is: " << binary << endl;
}

int main(){
    int num;
    string binary;

    progDesc();
    readdata(num);
    binary = intToBinary(num);
    output(num, binary);

    return 0;

}