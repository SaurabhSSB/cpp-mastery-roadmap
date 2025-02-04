// A constructor is a special member function of a class that is automatically invoked when an object of the class is created. 
// Its main purpose is to initialize the object.

// Dafault Constructor-  A constructor initialized with default value.
// Parameterized Constructor- A constructor that accepts parameters during execution.

# include<iostream>
using namespace std;

class Complex {
    int a; // Member variable
    int b; // Member variable
public:
    Complex(void); // Default constructor declaration

    void getData() {
        cout << "This is the value of complex number" << endl;
        cout << a << " + " << b << "i" << endl; // Displays values of 'a' and 'b'
    }
};

// Default constructor definition
Complex::Complex(void) {
    a = 1; // Initialize 'a'
    b = 1; // Initialize 'b'
}

int main() {
    Complex Stat; // Object creation invokes the default constructor
    Stat.getData(); // Displays the initialized values of 'a' and 'b'
    return 0;
}
