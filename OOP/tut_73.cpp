// Map 

#include<iostream>
#include<string>
#include<map>

using namespace std;

// Map is an associative array 

int main()
{
    map<string, int> marksMap;
    marksMap["Jony"] = 98;
    marksMap["Jack"] = 88;
    marksMap["David"] = 78;

    marksMap.insert({{"Kozume",169},{"Kuroo",187}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is :"<<marksMap.size()<<endl;
    cout<<"The max size is :"<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is :"<<marksMap.empty()<<endl;

    return 0;
}