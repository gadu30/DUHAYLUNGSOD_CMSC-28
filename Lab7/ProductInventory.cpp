#include "ProductInventory.h" // Include the header file containing class definitions for Clothing and Electronics
#include <iostream> // Include the input-output stream library for standard I/O operations
#include <stdlib.h> // Include the standard library for various utility functions
#include <iomanip> // Include the input-output manipulation library for formatting output

using namespace std; // Use the standard namespace to avoid prefixing 'std::' before standard functions and objects

// Function to display the program description
void progdescription() {
    cout << "                                  Program Description\n\n";
    cout << " This program asks the user to input the details of a product (clothing or electronics)\n";
    cout << "                               and display the information\n";
    cout << "                       Programmer: Gabriel I. Duhaylungsod\n";
    cout << "                                  Date: May 22, 2024\n";
    cout << "         Subject Number: CMSC 28 - OOP ACTIVITY Inheritance and Encapsulation\n\n";
}

int main() {
    progdescription(); // Call the function to display the program description

    Clothing shirt; // Create an object of the Clothing class
    Electronics gadget; // Create an object of the Electronics class
    string input; // String variable to hold user input
    double price; // Double variable to hold the price of the product

    cout << "ENTER DETAILS FOR THE CLOTHING\n" << endl; 

    // Get details for the clothing product from the user
    cout << "Enter shirt name: ";
    getline(cin, input); // Get the shirt name
    shirt.setName(input); // Set the shirt name

    cout << "Enter shirt price: ";
    cin >> price; // Get the shirt price
    cin.ignore(); // Ignore the newline character left in the input buffer
    shirt.setPrice(price); // Set the shirt price

    cout << "Enter shirt description: ";
    getline(cin, input); // Get the shirt description
    shirt.setDescription(input); // Set the shirt description

    cout << "Enter shirt size: ";
    getline(cin, input); // Get the shirt size
    shirt.setSize(input); // Set the shirt size

    cout << "Enter shirt color: ";
    getline(cin, input); // Get the shirt color
    shirt.setColor(input); // Set the shirt color

    cout << "Enter shirt material: ";
    getline(cin, input); // Get the shirt material
    shirt.setMaterial(input); // Set the shirt material

    cout << "\nENTER DETAILS FOR THE ELECTRONICS\n" << endl; 

    // Get details for the electronics product from the user
    cout << "Enter gadget name: ";
    getline(cin, input); // Get the gadget name
    gadget.setName(input); // Set the gadget name

    cout << "Enter gadget price: ";
    cin >> price; // Get the gadget price
    cin.ignore(); // Ignore the newline character left in the input buffer
    gadget.setPrice(price); // Set the gadget price

    cout << "Enter gadget description: ";
    getline(cin, input); // Get the gadget description
    gadget.setDescription(input); // Set the gadget description

    cout << "Enter gadget brand: ";
    getline(cin, input); // Get the gadget brand
    gadget.setBrand(input); // Set the gadget brand

    cout << "Enter gadget model: ";
    getline(cin, input); // Get the gadget model
    gadget.setModel(input); // Set the gadget model

    cout << "Enter gadget warranty: ";
    getline(cin, input); // Get the gadget warranty
    gadget.setWarranty(input); // Set the gadget warranty

    cout << "Enter gadget technical specifications: ";
    getline(cin, input); // Get the gadget technical specifications
    gadget.setTechSpecs(input); // Set the gadget technical specifications

    // Display the entered product information
    cout << "\n\nProduct Description\n" << endl;

    cout << "Clothing Product Information\n" << endl; 
    cout << "Name: " << shirt.getName() << endl; // Display the shirt name
    cout << "Price: " << std::fixed << std::setprecision(2) << shirt.getPrice() << endl; // Display the shirt price formatted to 2 decimal places
    cout << "Description: " << shirt.getDescription() << endl; // Display the shirt description
    cout << "Size: " << shirt.getSize() << endl; // Display the shirt size
    cout << "Color: " << shirt.getColor() << endl; // Display the shirt color
    cout << "Material: " << shirt.getMaterial() << endl; // Display the shirt material

    cout << "\n\nElectronics Product Information\n" << endl;
    cout << "Name: " << gadget.getName() << endl; // Display the gadget name
    cout << "Price: " << fixed << setprecision(2) << gadget.getPrice() << endl; // Display the gadget price formatted to 2 decimal places
    cout << "Description: " << gadget.getDescription() << endl; // Display the gadget description
    cout << "Brand: " << gadget.getBrand() << endl; // Display the gadget brand
    cout << "Model: " << gadget.getModel() << endl; // Display the gadget model
    cout << "Warranty: " << gadget.getWarranty() << endl; // Display the gadget warranty
    cout << "Technical Specifications: " << gadget.getTechSpecs() << endl; // Display the gadget technical specifications

    return 0; // Return 0 to indicate successful program execution
}
