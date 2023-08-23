#include <iostream>

using namespace std;

int main()
{
    /*Loops in c++:
    There are three types of loops in c++:
    1.For loop
    2.While loop
    3.Do while loop
    */

    // For loop in c++
    /*
    Syntax for for loop:
    for(initialization;condition;updation)
    {
        loop body(c++ code);
    }
    */
    // Basic for loop
    //  for (int i = 0; i < 10; i++)
    //  {
    //      cout << i << endl; // Printing numbers 1 to 10
    //  }
    // Infinite for loop
    //      for (int i = 0; 1 < 10; i++)
    //  {
    //      cout << i << endl; // Printing numbers 1 to 10
    //  }

    // While loop in c++
    /*
    Syntax for while loop:
    initializtion
    while(condition)
    {
       loop body(c++ code);
    }
    */
    //    int i = 1;
    //    while (i<=40)
    //    {
    //     cout << i << endl;
    //     i++;
    //    }
    // Infinite while loop
    // int i=1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // Do While loop
    // Syntax of Do while loop
    /*
       do{
            loop body(c++ code);
       }
       while(condition)
    */
    // basic do while loop
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40);
    // Infinite do while loop
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (true);

    return 0;
}
