#include <iostream>
#include <string>

using namespace std;

class person{
    private:
        int age;
        char gender;
    
    public:
        person(){}
        person(int a, char g){
            age = a;
            gender = g;
        }

        void setage(int newage){
            if(newage >= 0){
                age = newage;
            }
            else{
                cout << "NO!!!!" << endl;
            }
        }

        void setgender(char newg){
            if(( newg == 'M') || (newg == 'F')){
                gender = newg;
            }
            else{
                cout << "NO!!!! MAKE IT CAPITAL!!!" << endl;
            }
        }

        int getage(){
            return age;
        }

        char getgender(){
            return gender;
        }

        string getgeneration(){
            int year = 2024 - age;

            if(year <= 1927 && year >= 1901){
                return "Greatest Generation";
            }
            else if(year <= 1945 && year >= 1928){
                return "Silent Generation";
            }
            else if(year <= 1964 && year >= 1946){
                return "Boomers";
            }
            else if(year <= 1980 && year >= 1965){
                return "Generation X";
            }
            else if(year <= 1996 && year >= 1981){
                return "Millenials";
            }
            else if(year <= 2010 && year >= 1997){
                return "Gen Z";
            }
            else if(year <= 2024 && year >= 2011){
                return "Generation Alpha";
            }
        }
};

