#include<iostream>

using namespace std;

int main()
{
    int a = 4;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<*(ptr)<<endl;
    cout<<&ptr<<endl;


    float *p = new float(40.30);
    cout<<"The value at adress p is "<< *(p) <<endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;
    arr[3] = 50;
    arr[4] = 80;
    // delete arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete operator

    int m = 7;
    int* mtr = &m;
    *ptr = 70;
    
    cout<<"m is: "<<m<<endl;

    return 0;
}