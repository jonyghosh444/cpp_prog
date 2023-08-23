#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n>0 && n<=2)
    {
        return 1;
    }
    
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fibonacci(a)<<endl;

    return 0;
}