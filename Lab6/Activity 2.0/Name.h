#include <iostream>
#include <string>

using namespace std;

class name{

    private:
        string fn;
        string ln;

    public:
        name(){}
        name(string fname, string lname){
            fn = fname;
            ln = lname;
        }

        void setfname(string fname){
            fn = fname;
        }

        void setlname(string lname){
            ln = lname;
        }

        string getfname(){
            return fn;
        }

        string getlname(){
            return ln;
        }

};