#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //Connection our file with hout stream
    ofstream hout("samplefile.txt");
    
    //Creating a new stream and filling it with string enred by the usr
    cout<<"Enter your name"<<endl;
    string name;
    // cin>>name;
    getline(cin,name);

    //Writing a string to the file
    hout<<"My Name is "<<name;

    hout.close();

    ifstream hin("samplefile.txt");
    string content;
    // hin>>content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content<<endl;
    hin.close();
    
    return 0;
}