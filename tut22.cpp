// OOPs - Classes and objects

// c++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
// --> members are public
// --> No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in c++ are typedefed
// you cna declare objects along with the class declration like this:
/* class Employee{
    // class definition
 } harry, rohan, lovish; */
// harr.salary = 8 nmakes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    
    void ones_compliment(void);
    void display(void);
};

void binary::ones_compliment(void)
{   
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            // exit(0);
        }
    }
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}