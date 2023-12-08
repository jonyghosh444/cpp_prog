#include <iostream>
#include <fstream>

/* the useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase.
    3. ofstream --> derived from fstreambase. */

/* In order work with files in c++, you will have to open it. Primarily, there are 2 ways to open a file:
    1. using the constructor.
    2. using the member function open() of the class.
*/

using namespace std;



int main()
{
    string st = "Harry bro";
    string st2;

    // Opening files using constuctor and writeing it
    ofstream out("samplefile.txt"); // Write operation
    out<<st;

    // Opening files using constuctor and reading it
    ifstream in("samplefile2.txt"); // Write operation
    // in>>st2;
    getline(in,st2);
    // cout<<st2<<endl;
    getline(in,st2);
    cout<<st2<<endl;

    return 0;

}