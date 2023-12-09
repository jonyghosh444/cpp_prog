#include <iostream>

using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    // void display()
    // {
    //     cout << data << endl;
    // }
    void display();
};

template <class T> 
void Harry<T>:: display()
{
    cout << data << endl;
}

void func(int a){
    cout<<"First func() a: "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"(Templatised)func() a: "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"(Templatised)func() a: "<<a<<endl;
}

int main()
{
    // Harry<float> h(1.5);
    // Harry<char> h1('c');
    // Harry<int> h2(87);
    // cout << h.data << endl;
    // h1.display();
    // h2.display();

    // func(4); //Exact match takes the highest priority.
    func1(2);
    return 0;
}