#include <iostream>

using namespace std;

int sum(int a, int b)
{   
    cout<<"(Using function with 2 args): ";
    return a + b;
}
int sum(int a, int b, int c)
{
    cout<<"(Using function with 3 args): ";
    return a+b+c;
}
int sum(char c,int a)
{
    cout<<"Your character is: "<<c<<endl;
    return a;
}
//Calculate the volume of a cylinder
int volume(double r, int h)
{
    return(3.14*r*r*h);
}
//Calculate the volume of a cube
int volume(int a)
{
    return(a*a*a);
}
//Calculate the volume of a Rectangular box
int volume(int w,int h, int l)
{
    return(w*h*l);
}
int main()
{
    // char c = 'c';
    // cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;
    // cout<<"Character is "<< sum(c,1)<<endl;

    cout<<"The volume of cylinder is: "<<volume(3,6)<<endl;
    cout<<"The volume of cube is: "<<volume(3)<<endl;
    cout<<"The volume of rectangular box is: "<<volume(13,24,34)<<endl;
    return 0;
}