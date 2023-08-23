#include <iostream>

using namespace std;
int c = 45;
int main()
{
    // Data type
    // int a, b, c;
    // cout << "Enter The value of a:" << endl;
    // cin >> a;
    // cout << "Enter The value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is: " << c << endl;
    // cout << "The global c is: " << ::c << endl; // :: for global variable (scope resolution operator)

    // float d = 45.3;
    // long double e = 45.3l;
    // cout<<"The size of 34 is "<<sizeof(34)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<endl;
    // cout << "The value of d is: " << d << endl
    //      << "The value of e is: " << e << endl;

    // Reference Variables
    // float x = 54.4;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // Typecasting
    int a = 45;
    float b = 34.33;
    cout << "This value of a is " << (float)a << endl;
    cout << "This value of a is " << float(a) << endl;
    cout << "This value of b is " << int(b) << endl;

    int c = int(b);
    cout << "This value of c is " << c << endl;

    cout << "The expression is " << a + int(b) << endl;
    return 0;
}
