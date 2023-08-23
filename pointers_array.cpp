#include <iostream>

using namespace std;

int main()
{
    int marks[] = {44, 11, 22, 3};
    /*
    ----------pointer arithmetic------------
    adress(new) = adress(current)+i*sizeof(data type)
    */

    int *p = marks;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *(p) is: "<<*p<<endl;
    // cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;

    return 0;
}