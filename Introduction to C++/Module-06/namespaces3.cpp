#include<bits/stdc++.h>
using namespace std;

namespace Rakib{
    int id = 10;
    string name = "Rakib";
    void result(){
        cout<<"SSC: "<<3.99<<endl;
        cout<<"HSC: "<<4.91<<endl;
    }
}
namespace Sakib{
    int id = 33;
    string name = "Sakib";
    void result(){
        cout<<"SSC: "<<2.98<<endl;
        cout<<"HSC: "<<3.11<<endl;
    }
}
// ***Whitout "using namespaces"
int main(){
    cout<<"Rakib info:-"<<endl;
    cout<<Rakib::id<<" "<<Rakib::name<<endl;
    Rakib::result();
    cout<<"Sakib info:-"<<endl;
    cout<<Sakib::id<<" "<<Sakib::name<<endl;
    Sakib::result();
    return 0;
}