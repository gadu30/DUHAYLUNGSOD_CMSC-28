#include <iostream> // Include input-output stream

using namespace std;

const int MAX_SIZE = 10; // Define a constant for the maximum array size

// Function to display program description
void progDesc(){
    cout << "                        PROGRAM DESCRIPTION" << endl;
    cout << "This program will ask the user to input various numbers (positive or negative but not zero)" << endl;
    cout << "           and perform basic statistics on these numbers." << endl;
    cout << "               Submitted by: Gabriel I. Duhaylungsod" << endl;
    cout << "                        Date: May 11, 2024" << endl;
}

// Function to get input from the user and store it in an array
void getInput(int arr[], int& size) {
    int num;
    for(size = 0; size < MAX_SIZE; size++) {
        cout << "Input an Integer (or zero to finish): " << endl; // Prompt user for input
        cin >> num; // Read input
        if(num == 0) break; // Exit loop if input is zero
        arr[size] = num; // Store input in array
    }
}

// Function to find the largest number in an array
int findLarge(const int arr[], int size) {
    if(size == 0) return 0; // Return 0 if the array is empty
    int largest = arr[0]; // Initialize largest with the first element
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) largest = arr[i]; // Update largest if current element is greater
    }
    return largest; // Return the largest number
}

// Function to find the smallest number in an array
int findSmall(const int arr[], int size) {
    if(size == 0) return 0; // Return 0 if the array is empty
    int smallest = arr[0]; // Initialize smallest with the first element
    for(int i = 1; i < size; i++) {
        if(arr[i] < smallest) smallest = arr[i]; // Update smallest if current element is smaller
    }
    return smallest; // Return the smallest number
}

// Function to calculate the average of numbers in an array
double findAverage(const int arr[], int size) {
    if(size == 0) return 0; // Return 0 if the array is empty
    int sum = 0; // Initialize sum
    for(int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return static_cast<double>(sum) / size; // Return the average
}

// Function to calculate the power of a number
double power(double base, int exp) {
    double result = 1; // Initialize result
    for(int i = 0; i < exp; i++) {
        result *= base; // Multiply base exp times
    }
    return result; // Return the result
}

// Function to calculate the square root of a number using the Babylonian method
double customSqrt(double num) {
    if(num == 0) return 0; // Return 0 if the number is 0
    double guess = num; // Initialize guess
    double acc = 0.00001; // Set accuracy
    while((guess - num / guess) > acc) { // Iterate until the desired accuracy is reached
        guess = 0.5 * (guess + num / guess); // Update guess
    }
    return guess; // Return the square root
}

// Function to calculate the standard deviation of numbers in an array
double findStanDev(const int arr[], int size, double average) {
    if(size == 0) return 0; // Return 0 if the array is empty
    double sum = 0; // Initialize sum
    for(int i = 0; i < size; i++) {
        sum += power(arr[i] - average, 2); // Add the squared difference from the average to sum
    }
    return customSqrt(sum / size); // Return the standard deviation
}

// Function to calculate the variance from the standard deviation
double findVar(double stanDev) {
    return power(stanDev, 2); // Return the squared standard deviation (variance)
}

// Function to output the results
void output(int largest, int smallest, double average, double stanDev, double var) {
    cout << "\nLargest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << stanDev << endl;
    cout << "Variance: " << var << endl;
}

// Main function
int main() {
    progDesc(); // Display program description
    int arr[MAX_SIZE]; // Declare array to store input
    int size; // Declare variable to store the size of the array
    getInput(arr, size); // Get input from the user
    int largest = findLarge(arr, size); // Find the largest number
    int smallest = findSmall(arr, size); // Find the smallest number
    double average = findAverage(arr, size); // Calculate the average
    double stanDev = findStanDev(arr, size, average); // Calculate the standard deviation
    double variance = findVar(stanDev); // Calculate the variance
    output(largest, smallest, average, stanDev, variance); // Output the results
    
    return 0; // Return 0 to indicate successful completion
}
