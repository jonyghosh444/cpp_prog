#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter your number: " << endl;
    cin >> num;
    int f = 0;
    int n1 = 0;
    int n2 = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            f = 0;
        }
        else if (i > 0 && i <= 2)
        {
            f = 1;
            n1 = 1;
            n2 = 1;
        }
        else
        {
            f = n1 + n2;
            n1 = n2;
            n2 = f;
        }
    }
    cout << "Fibonacci series number at index " << num << " is: " << f << endl;

    return 0;
}