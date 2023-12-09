#include<iostream>

using namespace std;

// float funcAverage(int a, int b ){
//     // float avg = static_cast<float>(a + b) / 2;
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAverage2(int a, float b ){
//     // float avg = static_cast<float>(a + b) / 2;
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b){
    T temp =a;
    a = b;
    b = temp;
}


template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a;

    a = funcAverage(10,3);
    cout<<"the average of these numbers is "<<a<<endl;
    // printf("The avrage of these numbers is %.2f\n",a);
    
    int x = 5;
    int y = 8;
    cout<<x<<endl<<y<<endl;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}