#include <iostream>
using namespace std;

int glo = 6;
void sum()
{
    int a;
    cout << "sumFunc: " << glo << "\n";
}

int main()
{
    int glo = 9;
    glo = 78;
    int a = 14, b = 5;
    float pi = 3.14;
    char c = 'u';
    bool m = true;
    bool n = false;
    sum();
    // cout << "here the value of a is " << a << ".\nThe value of b is " << b << ".\n";
    // cout << "here the value of PI is " << pi<< "\n";
    // cout << "here the value of c is " << c<< "\n";
    cout << glo << "\n";
    cout << a << "\n";
    cout << m << "\n";
    cout << n << "\n";
    return 0;
}
