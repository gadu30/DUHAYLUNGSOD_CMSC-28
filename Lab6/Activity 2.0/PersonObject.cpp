#include <iostream>
#include "Person.h"
#include "Name.h"

using namespace std;

int main(){
    string fname;
    string lname;
    int a;
    char g;

    cout << "\nName of person yay :))" << endl;
    name p;
    person n;

    cout << "Give first name: ";
    cin >> fname;
    p.setfname(fname);

    cout << "Give last name: ";
    cin >> lname;
    p.setlname(lname);

    cout << "Give age: ";
    cin >> a;
    n.setage(a);

    cout << "Give gender: ";
    cin >> g;
    n.setgender(g);

    cout << "\nFirst name: " << p.getfname() << endl;
    cout << "Last name: " << p.getlname() << endl;
    cout << "Age: " << n.getage() << endl;
    cout << "Gender: " << n.getgender() << endl;
    cout << "Generation: " << n.getgeneration() << endl;

    return 0;
}

