#include <iostream>

using namespace std;

class Base1
{
    int base1data;

public:
    Base1(int a)
    {
        base1data = a;
        cout << "Base1 constructor called" << endl;
    }
    void display1(void)
    {
        cout << "Base1 Number is: " << base1data<<endl;
    }
};
class Base2
{
    int base2data;

public:
    Base2(int a)
    {
        base2data = a;
        cout << "Base2 constructor called" << endl;
    }
    void display2(void)
    {
        cout << "Base2 Number is: " << base2data<<endl;
    }
};

class Derived : public Base1, public Base2
{

    int ddata;

public:
    Derived(int a, int b, int c) : Base1(a), Base2(b)
    {
        ddata = c;
        cout << "Derived class constructor called" << endl;
    }
    void displayd(void)
    {
        cout << "Derived class Number is:" << ddata << endl;
    }
};

int main()
{
    Derived d(1, 6, 9);
    // d.display1();
    d.display2();
    // d.displayd();

    return 0;
}