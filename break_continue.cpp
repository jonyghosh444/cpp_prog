#include <iostream>

using namespace std;

int main()
{
    // break 
    // for (int i = 0; i < 40; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2){
    //         break;
    //     }
    // }
    //continue
    for (int i = 0; i < 40; i++)
    {
        // cout<<i<<endl;
        if(i==2){
            continue;
        }
        cout<<i<<"% "<<"Done"<<endl;
         
    }
    
    cout<<"loop done"<<endl;
    
    return 0;
}