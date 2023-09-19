// Single Inheritence Deep Dive

#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not iheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData(void)
{
    data1=100;
    data2=200;
}
int Base :: getData1()
{
    return data1;
}
int Base :: getData2()
{
    return data2;
}


class Derived: private Base //Class is being derived publically
{
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process()
{
    setData();
    data3 = data2*getData1();
}

void Derived :: display()
{
    cout<<"value of data 1 is "<<getData1() << endl;
    cout<<"value of data 2 is "<<data2 << endl;
    cout<<"value of data 3 is "<<data3 << endl;
}


using namespace std;

int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.display();


    return 0;
}