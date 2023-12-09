#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // zero length vector
    vector<char> vec2(4); // 4-element character vector 
    // display(vec1);
    // vec2.push_back('i');
    vector<char> vec3(vec2); // 4-element character vector from vec2 
    // display(vec3);
    vector<int> vec4(6,3); // 6-element vector of 3s
    display(vec4);

    // display(vec2);
    int element, size=5;
    // cout << "Enter the size of your vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an elemnt to add to this vector:" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    
    // display(vec1);
    // // vec1.pop_back();
    // vector<int>:: iterator iter = vec1.begin();
    // // vec1.insert(iter+1,1000,566);
    // display(vec1);
    return 0;
}