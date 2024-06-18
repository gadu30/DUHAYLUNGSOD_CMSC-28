#include <iostream>

using namespace std;

// Function to display the program description
void progDesc() {
    cout << "              PROGRAM DESCRIPTION" << endl;
    cout << " This program asks the user to input three numbers (x, y, z)," << endl;
    cout << "and finds the highest and lowest number, and their difference." << endl;
    cout << "       Programmer: Gabriel I. Duhaylungsod" << endl;
    cout << "              Date: April 26, 2024" << endl;
    cout << "      Subject Number: CMSC 28 - C++ Warm Up" << endl;
}

// Function to get data from the user
void getdata(int& x, int& y, int& z) {
    cout << "\nEnter three numbers (x, y, z): ";
    cin >> x >> y >> z;
}

// Function to find the smallest of three values
int smallest(int x, int y, int z) {
    if (x <= y && x <= z) {
        return x;
    } else if (y <= x && y <= z) {
        return y;
    } else {
        return z;
    }
}

// Function to find the largest of three values
int largest(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

// Function to output the results
void output(int x, int y, int z, int smallval, int bigval, int diff) {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "Smallest Value: " << smallval << endl;
    cout << "Largest Value: " << bigval << endl;
    cout << "Difference: "  << diff << endl;
}

int main() {
    int x, y, z, smallval, bigval, diff;

    // Display program description
    progDesc();

    // Get data from the user
    getdata(x, y, z);

    // Calculate the smallest and largest values
    smallval = smallest(x, y, z);
    bigval = largest(x, y, z);

    // Calculate the difference between the largest and smallest values
    diff = bigval - smallval;

    // Output the results
    output(x, y, z, smallval, bigval, diff);

    return 0;
}
