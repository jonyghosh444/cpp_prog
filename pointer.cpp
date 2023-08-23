#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int a = 10;
    ptr = &a; //& is adress of operator
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl; // * is Dereference operator

    // pointer to pointer
    int **b = &ptr;
    cout<<"The adress of ptr is: "<<&b<<endl;
    cout<<"The adress of b is: "<<b<<endl;
    cout<<"The value at adress b is: "<<*b<<endl;
    cout<<"The value at adress value_at(value_at(b)) is: "<<**b<<endl;
    return 0;
}