#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    string studentNum;

public:

    string course;
    string department;
    string college;

    Student(string fname, string lname, string gender, string emailAdd, string cpNum, string studentNum, string course, string department, string college)
        : Person(fname, lname, gender, emailAdd, cpNum),
          studentNum(studentNum),
          course(course),
          department(department),
          college(college)
    {}

    string getStudentNum(){
        return studentNum;
    }

    void setStudentNum(string newStudentNum){
        studentNum = newStudentNum;
    }

    string getCourse(){
        return course;
    }

    void setCourse(string newCourse){
        course = newCourse;
    }

    string getDepartment(){
        return department;
    }

    void setDepartment(string newDepartment){
        department = newDepartment;
    }

    string getCollege(){
        return college;
    }

    void setCollege(string newCollege){
        college = newCollege;
    }
};

#endif
