#include <iostream>

using namespace std;

int main()
{
    int marks[] = {34, 23, 11, 22};
    cout << "These are marks: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << "Before changing index 2 value: " << marks[2] << endl;
    marks[2] = 66;
    cout << "After changing index 2 value: " << marks[2] << endl;
    cout << marks[3] << endl;
    cout << endl;

    int mathMarks[4];
    mathMarks[0] = 55;
    mathMarks[1] = 15;
    mathMarks[2] = 65;
    mathMarks[3] = 75;

    cout << "These are math marks: " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << endl;

    cout << "By For loop: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Marks value at index " << i << ": " << marks[i] << endl;
    }
    cout << endl;

    cout << "By While loop: " << endl;
    int w = 0;
    while (w < 4)
    {
        cout << "Marks value at index " << w << ": " << marks[w] << endl;
        w++;
    }
    cout<<endl;

    cout<<"By Do while loop: "<<endl;
    int dw=0;
    do
    {
        cout << "Marks value at index " << dw << ": " << marks[dw] << endl;
        dw++;
    } while (dw<4);
    


    return 0;
}