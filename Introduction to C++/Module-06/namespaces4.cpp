#include<bits/stdc++.h>
using namespace std;

namespace Rakib{
    int id1 = 18;
    string name1 = "Rakib al hassan";
    void result1(){
        cout<<"SSC: "<<3.99<<endl;
        cout<<"HSC: "<<4.91<<endl;
    }
}
namespace Sakib{
    int id2 = 39;
    string name2 = "Sakib al hassan";
    void result2(){
        cout<<"SSC: "<<2.98<<endl;
        cout<<"HSC: "<<3.11<<endl;
    }
}
// ***Using - "using namespaces"
using namespace Rakib;
using namespace Sakib;
int main(){
    cout<<"Rakib info:-"<<endl;
    cout<<id1<<" "<<name1<<endl;
    result1();
    cout<<"Sakib info:-"<<endl;
    cout<<id2<<" "<<name2<<endl;
    result2();
    return 0;
}