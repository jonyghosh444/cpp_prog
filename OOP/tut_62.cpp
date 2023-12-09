#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    // ofstream out;
    // out.open("samplefile.txt");
    // out<<"This is me\n";
    // out<<"This is me also\n";
    // out<<"This is me also\n";
    // out<<"This is me also\n";
    // out.close();

    ifstream in;
    string st, st2;
    in.open("samplefile.txt");
    // in>>st>>st2;
    // cout<<st<<endl;
    // cout<<st2<<endl;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();
    
    return 0;
}