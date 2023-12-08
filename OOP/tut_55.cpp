#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class var_base: " << var_base << endl; 
        cout << "Displaying Derived class var_derived: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointers;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointers = &obj_derived; //Pointing Base class pointer ot derived class

    base_class_pointers->var_base = 34;
    // base_class_pointers->var_derived = 34; //will throw an error
    base_class_pointers->display();

    base_class_pointers->var_base = 3400;
    base_class_pointers->display();

    DerivedClass * Derived_class_pointer;
    Derived_class_pointer = &obj_derived;
    Derived_class_pointer->var_derived = 98;
    Derived_class_pointer->display();
    return 0;
}