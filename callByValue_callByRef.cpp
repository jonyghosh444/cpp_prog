#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int res;
    res = a + b;
    return res;
}
// This will not swap a and b
void swap(int a, int b) // temp a b
{
    int temp; // 0     4 5
    temp = a; // 4     4 5
    a = b;    // 4     5 5
    b = temp; // 4     5 4
}

// Call by Reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by Reference using c++ reference Variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// return reference variable
int &returnReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 10;
    int y = 15;

    // cout<<"The sum of 10 and 15 is: "<<sum(x,y)<<endl;
    cout << "The value of x is: " << x << " and The value of y is: " << y << endl;
    // swap(x,y); //will not swap
    // swapPointer(&x,&y); // this will swap x and y using pointer reference.
    swapReferenceVar(x, y); // this will swap x and y using reference
    cout << "The value of x is: " << x << " and The value of y is: " << y << endl;
    returnReferenceVar(x, y)=766; //changing return value of x
    cout << "The value of x is: " << x << " and The value of y is: " << y << endl;
    cout<<returnReferenceVar(x,y)<<endl; // return by reference

    return 0;
}