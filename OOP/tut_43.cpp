#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kemon acho?" << endl;
    }
};

class Derived : public Base1,public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();
        }
};

class B{
    int a;
    public:
        void say(){
            cout<<"Hello world!!!"<<endl;
        }
};
class d: public B{
    int a;
    public:
        void say(){
            cout<<"Hello my beautiful people!!!"<<endl;
            // B::say();
        }
};


int main()
{
    // // Ambibuity 1
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // Derived d;
    // d.greet();

    B b;
    b.say();
    d D;
    D.say();
    
}