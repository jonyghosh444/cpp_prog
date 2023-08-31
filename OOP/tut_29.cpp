// Constructor in C++

#include <iostream>

using namespace std;

class Complex
{
    int a, b;
    // creating a constructor
public:
    /*Constructor is a special member function with the same name as of the class. It is automatically invoked whenever an object is created.
    It used to intialize the objects of its class*/
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //This is a default constructor as it kaes no param
{
    a = 0;
    b = 0;
    cout<<"Hello world."<<endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// Characteristics of Constructors 
 /*
1. It should be declared in the public section of the class
2. They are atuomatically invoked 
3. The cannot return values and do not have return types
4. It can have default arguments
5. We cannot refere to their address
*/