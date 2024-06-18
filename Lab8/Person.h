#ifndef PERSON_H
#define PERSON_H

#include <iostream> 
#include <string> 

using namespace std;

class Person {
private:
    string fname;
    string lname;
    string gender;
    string emailAdd;
    string cpNum;

public:
    Person(){}
    Person(string fn, string ln, string gen, string email, string cpN){
        fname = fn;
        lname = ln;
        gender = gen;
        emailAdd = email;
        cpNum = cpN;
    }

    string getfname(){ 
        return fname; 
    }
    string getlname(){ 
        return lname; 
    }
    string getgender(){
        return gender; 
    }
    string getEmailAdd(){
        return emailAdd;
    }
    string getCpNum(){
        return cpNum;
    }

    void setfname(string newfname){
        fname = newfname;
    }

    void setlname(string newlname){
        lname = newlname;
    }

    void setgender(string newgender){
        gender = newgender;
    }

    void setEmailAdd(string newEmailAdd){
        emailAdd = newEmailAdd;
    }

    void setCpNum(string newCpNum){
        cpNum = newCpNum;
    }

    string getName(){
        return fname + " " + lname;
    }
};

#endif 
