// there are two types of header file:
// 1.System header flies: It comes with the compiler
#include <iostream>
// 2. User defined header fliles: It is written by the programmer
// #include<custheader.h> // custheader.h file must need to be exist in current directory

using namespace std;

int main()
{
    cout << "This is hello world\n";
    int a = 5, b = 2;
    cout << "Operators in c++" << endl;
    // Arethmetic operators
    cout << "The value of a+b is: " << a + b << endl;
    cout << "The value of a-b is: " << a - b << endl;
    cout << "The value of a*b is: " << a * b << endl;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a%b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    cout << endl;
    // Assignment operators --> used to assign values to varibles
    int m = 3, n = 9;
    char p = 'd';
    cout << m << endl;
    cout << n << endl;
    cout << p << endl;
    cout << endl;
    // Comparison operators
    cout << "The value of a == b is" << (a == b) << endl;
    cout << "The value of a != b is" << (a != b) << endl;
    cout << "The value of a > b is" << (a > b) << endl;
    cout << "The value of a < b is" << (a < b) << endl;
    cout << "The value of a <= b is" << (a <= b) << endl;
    cout << "The value of a >= b is" << (a >= b) << endl;
    cout << endl;

    // Logical operators
    cout << "Following are the logical oprators in C++" << endl;
    cout << "The value of logical AND operator (a==b) && (a<b) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of logical OR operator (a==b) || (a>b) is:" << ((a == b) || (a > b)) << endl;
    cout << "The value of logical NOT operator (!(a==b)) || (a>b) is:" << (!(a == b)) << endl;
    return 0;
}
