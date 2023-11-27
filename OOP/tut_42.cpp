#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{
protected:
    int num1;
    int num2;

public:
    SimpleCalculator(int n1, int n2) : num1(n1), num2(n2) {}
    int addition(int n1, int n2)
    {
        return n1 + n2;
    }
    int subtraction(int n1, int n2)
    {
        return n1 - n2;
    }
    int multiplication(int n1, int n2)
    {
        return n1 * n2;
    }
    float division(int n1, int n2)
    {
        return n1 / n2;
    }

    void Simple_display()
    {
        cout << "The Additon of " << num1 << " and" << num2 << " is: " << addition(num1, num2) << endl;
        cout << "The Substraction of " << num1 << " and" << num2 << " is: " << subtraction(num1, num2) << endl;
        cout << "The Multiplication of " << num1 << " and" << num2 << " is: " << multiplication(num1, num2) << endl;
        cout << "The Division of " << num1 << " and" << num2 << " is: " << division(num1, num2) << endl;
    }
};

class ScientificalCalculator
{
protected:
    int num1;

public:
    ScientificalCalculator(int n1) : num1(n1) {}
    ScientificalCalculator() : num1(0) {}
    int cube(int n1)
    {
        return pow(n1,3);
    }
    float square(int n1)
    {
        return pow(n1,2);
    }
    int squaredroot(int n1)
    {
        return sqrt(n1);
    }
    float quberoot(int n1)
    {
        return cbrt(n1);
    }

    void scientific_display()
    {
        cout << "The Square of " << num1 << " is: " << square(num1) << endl;
        cout << "The Square root of " << num1 << " is: " << squaredroot(num1) << endl;
        cout << "The Cube of " << num1 << " is: " << cube(num1) << endl;
        cout << "The Cube root of " << num1 << " is: " << quberoot(num1) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificalCalculator
{
public:
    HybridCalculator(int n1, int n2) : SimpleCalculator(n1, n2), ScientificalCalculator(n1) {}
    void show()
    {
        Simple_display();
        scientific_display();
    }
};

int main()
{

    HybridCalculator cal(2, 22);

    cal.show();

    return 0;
}