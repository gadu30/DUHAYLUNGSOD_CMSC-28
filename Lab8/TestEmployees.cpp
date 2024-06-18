#include "Employees.h"
#include "Person.h"
#include <string> 
#include <iostream> 
#include <list> 

using namespace std; 

Employees getEmployeesInput(string prompt) {

    string fname, lname, gender, emailAdd, cpNumber, empNum, Position, Office;
    double Salary;

    cout << "\nEnter details for " << prompt << ":\n";
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter gender: ";
    getline(cin, gender);
    cout << "Enter email address: ";
    getline(cin, emailAdd);
    cout << "Enter contact number: ";
    getline(cin, cpNumber);
    cout << "Enter employee number: ";
    getline(cin, empNum);
    cout << "Enter position: ";
    getline(cin, Position);
    cout << "Enter office: ";
    getline(cin, Office);
    cout << "Enter salary: ";
    cin >> Salary;
    cin.ignore();

    return Employees(fname, lname, gender, emailAdd, cpNumber, empNum, Position, Office, Salary);
}

string getStringInput(string prompt) {
    cout << "Enter " << prompt << ": ";
    string input;
    getline(cin, input);
    return input;
}

int getIntInput(string prompt) {
    cout << "Enter number of " << prompt << ": ";
    int input;
    cin >> input;
    cin.ignore();
    return input;
}

void progdescription() {
    cout << "                              HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << " This program asks the user to input the details of an employee and display the information\n";
    cout << "                            Programmer: Gabriel Duhaylungsod\n";
    cout << "                                  Date: May 29, 2024\n";
    cout << "                       Subject Number: CMSC 28 - OOP 4 INHERITANCE\n";
}

int main() {
    progdescription();

    int numEmployees = getIntInput("Employees");
    list<Employees> employees;

    for (int i = 0; i < numEmployees; i++) {
        employees.push_back(getEmployeesInput("Employee " + to_string(i + 1)));
    }

    for (Employees& employee : employees) {
        cout << "\nEMPLOYEE: " << employee.getfname() << " " << employee.getlname() << "\n";
        cout << "Gender: " << employee.getgender() << "\n";
        cout << "Email Address: " << employee.getEmailAdd() << "\n";
        cout << "Contact Number: " << employee.getCpNum() << "\n";
        cout << "Employee Number: " << employee.getempNum() << "\n";
        cout << "Position: " << employee.Position << "\n";
        cout << "Office: " << employee.Office << "\n";
        cout << "Salary: " << employee.Salary << "\n";
    }

    return 0;
}
