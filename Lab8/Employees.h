#ifndef EMPLOYEES_H 
#define EMPLOYEES_H

#include "Person.h"

class Employees : public Person {
private:
    string empNum;

public:
    string Position;
    string Office;
    double Salary;

    Employees(string fname, string lname, string gender, string emailAdd, string cpNumber, string empNum, string Position, string Office, double Salary) 
        : Person(fname, lname, gender, emailAdd, cpNumber),
          empNum(empNum),
          Position(Position),
          Office(Office),
          Salary(Salary)
    {}

    string getempNum(){
        return empNum;
    }


    void setempNum(string newempNum){
        empNum = newempNum;
    }
};

#endif 