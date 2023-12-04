#include<iostream>

using namespace std;

class Test{
    int a;
    int b;
public:
    Test(int i, int j) : a(i),b(a+i){
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};



int main()
{
    Test t(33,22);
    
    return 0;
}