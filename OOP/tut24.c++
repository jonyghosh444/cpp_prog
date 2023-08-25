#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter Employee ID: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of  this employee is " << id << " .This is Employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id; //throws an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    //  harr.count = 1 // cannot do this as id and count ar private
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}