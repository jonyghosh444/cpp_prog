#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    //Function Objects: Function wrapped in a class so that it available like an object

    int arr[] = {11,552,23,4,523,62,71,28};
    sort(arr, arr+8);
    sort(arr, arr+8, greater<int>());

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    



    return 0;
}