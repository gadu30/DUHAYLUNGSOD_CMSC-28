#include <string> // Include the string library for using string class

using namespace std; // Use the standard namespace to avoid prefixing 'std::' before standard functions and objects

// Base class representing a generic product
class Product {
    private:
        string name; // Variable to store the product name
        double price; // Variable to store the product price
        string description; // Variable to store the product description

    public:
        // Setter for the product name
        void setName(string n) { 
            name = n; 
        }

        // Setter for the product price
        void setPrice(double p) { 
            price = p; 
        }

        // Setter for the product description
        void setDescription(string d) { 
            description = d; 
        }

        // Getter for the product name
        string getName() { 
            return name; 
        }

        // Getter for the product price
        double getPrice() { 
            return price; 
        }

        // Getter for the product description
        string getDescription() { 
            return description; 
        }
};

// Derived class representing a clothing product, inherits from Product
class Clothing : public Product {
    private:
        string size; // Variable to store the clothing size
        string color; // Variable to store the clothing color
        string material; // Variable to store the clothing material

    public:
        // Setter for the clothing size
        void setSize(string s) { 
            size = s; 
        }

        // Setter for the clothing color
        void setColor(string c) { 
            color = c; 
        }

        // Setter for the clothing material
        void setMaterial(string m) { 
            material = m; 
        }

        // Getter for the clothing size
        string getSize() { 
            return size; 
        }

        // Getter for the clothing color
        string getColor() { 
            return color; 
        }

        // Getter for the clothing material
        string getMaterial() { 
            return material; 
        }
};

// Derived class representing an electronics product, inherits from Product
class Electronics : public Product {
    private:
        string brand; // Variable to store the electronics brand
        string model; // Variable to store the electronics model
        string warranty; // Variable to store the electronics warranty
        string techSpecs; // Variable to store the technical specifications of the electronics

    public:
        // Setter for the electronics brand
        void setBrand(string b) { 
            brand = b; 
        }

        // Setter for the electronics model
        void setModel(string m) { 
            model = m; 
        }

        // Setter for the electronics warranty
        void setWarranty(string w) { 
            warranty = w; 
        }

        // Setter for the technical specifications
        void setTechSpecs(string ts) { 
            techSpecs = ts; 
        }

        // Getter for the electronics brand
        string getBrand() { 
            return brand; 
        }

        // Getter for the electronics model
        string getModel() { 
            return model; 
        }

        // Getter for the electronics warranty
        string getWarranty() { 
            return warranty; 
        }

        // Getter for the technical specifications
        string getTechSpecs() { 
            return techSpecs; 
        }
};
