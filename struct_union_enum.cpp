#include<iostream>

using namespace std;

//Struct
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}emp;

//Unions
union money
{
    int rice;
    char car;
    float punds;
};


int main()
{
    // // Structure
    // emp harry;
    // emp larry;
    // emp jerry;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 123520;
    // cout<<"salary of harry: "<<harry.salary<<endl;
    // cout<<"eId of harry: "<<harry.eId<<endl;
    // cout<<"favChar of harry: "<<harry.favChar<<endl;

    // //Union (We can use only 1 type at a time)
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<"value of m1.rice: "<<m1.rice<<endl;
    // cout<<"value of m1.car: "<<m1.car<<endl;

    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal m = lunch;
    cout<<m<<endl;
    cout<<(m==1)<<endl;
    return 0;
}