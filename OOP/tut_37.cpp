#include <iostream>

using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.5;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    // members/method/etc....
}
Note:
1. Dfault visibility mode is private.
2. Private visibility mode: Public members of the base class becomes Private members of the drived class.
3. Public visibility mode: Public members of the base class becomes public members of the drived class.
4.Private members of base class are never inherited
*/

// creating a programmer class drived from Employee Base class

class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(1);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}