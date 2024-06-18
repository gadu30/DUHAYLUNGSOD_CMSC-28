#include <iostream>
#include <string>

using namespace std;

class sweet{

    private:
        string brand;
        string flavor;
        string color;

    public:
        // Constructor
        sweet(string brand, string flavor, string color) {
            this -> brand = brand;
            this -> flavor = flavor;
            this -> color = color;
        }

        // Member function to display the details of a student
        void displayDetails(){
            cout << "Brand: " << brand << endl;
            cout << "Flavor: " << flavor << endl;
            cout << "Color: " << color << endl;
        }
};