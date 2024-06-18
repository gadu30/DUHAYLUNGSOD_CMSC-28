#include "Student.h"
#include "Person.h"
#include <string> 
#include <iostream> 
#include <list> 

using namespace std;

Student getStudentInput(string prompt) {
    string fname, lname, gender, emailAdd, cpNum, studentNum, Course, Department, College;

    cout << "Enter details for " << prompt << ":\n";
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter gender: ";
    getline(cin, gender);
    cout << "Enter email address: ";
    getline(cin, emailAdd);
    cout << "Enter contact number: ";
    getline(cin, cpNum);
    cout << "Enter student number: ";
    getline(cin, studentNum);
    cout << "Enter course: ";
    getline(cin, Course);
    cout << "Enter department: ";
    getline(cin, Department);
    cout << "Enter college: ";
    getline(cin, College);

    return Student(fname, lname, gender, emailAdd, cpNum, studentNum, Course, Department, College);
}

int getIntInput(string prompt) {
    cout << "Enter number of " << prompt << ": ";
    int input;
    cin >> input;
    cin.ignore();
    return input;
}

void progdescription() {
    cout << "                                 Program Description:\n\n";
    cout << " This program asks the user to input the details of a student and display the information\n";
    cout << "                           Programmer: Gabriel Duhaylungsod\n";
    cout << "                                  Date: May 29, 2024\n";
    cout << "                       Subject Number: CMSC 28 - OOP 4 INHERITANCE\n";
}

int main() {
    progdescription();

    int numStudents = getIntInput("Students");
    list<Student> students;

    for (int i = 0; i < numStudents; i++) {
        students.push_back(getStudentInput("Student " + to_string(i + 1)));
    }

    for (Student& student : students) {
        cout << "\n\n STUDENT: " << student.getfname() << " " << student.getlname() << "\n";
        cout << "Gender: " << student.getgender() << "\n";
        cout << "Email Address: " << student.getEmailAdd() << "\n";
        cout << "Contact Number: " << student.getCpNum() << "\n";
        cout << "Student Number: " << student.getStudentNum() << "\n";
        cout << "Course: " << student.getCourse() << "\n";
        cout << "Department: " << student.getDepartment() << "\n";
        cout << "College: " << student.getCollege() << "\n";

        cout << "\nHi, " << student.getfname() << " " << student.getlname() << "! Welcome to UP Mindanao and congratulations! ";
        cout << "We are pleased to inform you that you are admitted in the \"" << student.getCourse() << "\" under the \"";
        cout << student.getDepartment() << "\", \"" << student.getCollege() << "\". Your Student number is \"" << student.getStudentNum() << "\".\n";
    }

    return 0;
}
