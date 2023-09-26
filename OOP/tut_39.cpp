#include <iostream>

using namespace std;

class Base
{
    protected:
        int a;
    private:
         int b;
    
};

/*
For a protected member:
                    Public derivation   Private Derivation   Protected Derivation
1. Private members    Not inhrited        Not inhrited          Not inhrited
2. protected members  protected             Private             Protected
3. public members     Public                Private             Protected
*/

class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    

    return 0;
}