#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class person{
    private:
        string fn;
        string ln;
        string gen;
    
    public:
        person(){}
        person(string fname, string lname, string gender){
            fn = fname;
            ln = lname;
            gen = gender;
        }

        string getfname(){
            return fn;
        }

        string getlname() {
            return ln;
        }

        string getgender() {
            return gen;
        }

        void setfname(string newfname) {
            fn = newfname;
        }

        void setlname(string newlname) {
            ln = newlname;
        }

        void setgender(string newgender) {
            gen = newgender;
        }

        string getFullName(){
            return fn + " " + ln;
        }
};

#endif