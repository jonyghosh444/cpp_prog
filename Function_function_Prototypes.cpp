#include <iostream>

using namespace std;

// Funtion prototype
// type funtion-name (arguments);
int addition(int a, int b);
void g();

int main()
{
    int num1, num2;
    cout << "Enter number1: " << endl;
    cin >> num1;
    cout << "Enter number2: " << endl;
    cin >> num2;
    cout << "The result is: " << addition(num1, num2) << endl;
    // num1 and num2 are actual parameters 
    g();
    return 0;
}
int addition(int a, int b)
{
    // a and b are formal parameters 
    // a and b will be taking values from actual parameters num1 and num2 
    return a + b;
}

void g()
{
    cout<<"Hellos, Good Morning..."<<endl;
}