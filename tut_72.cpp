#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(105);
    list1.push_back(152);
    list1.push_back(25);
    list1.push_back(541);
    list1.push_back(51);

    display(list1);
    //Removing elements from the list
    // list1.pop_back();
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(15);
    // list1.remove(25);

    //Sorting the list
    // list1.sort();
    // display(list1);

    list<int> list2(3); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 3005;
    iter++;
    *iter = 25;
    iter++;

    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);

    // Reversing the list 
    list1.reverse();
    display(list1);


    return 0;
}