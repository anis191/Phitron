#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1st --> string a("string");
    string a("Hello World");
    cout<<a<<endl;
    // 2nd --> string b("string",integer);
    string b("Hello World",5); // 0th index to 4th index
    cout<<b<<endl;
    // 3rd --> string d(c,integer);
    string c = "Hello World";
    string d(c,5);
    cout<<d<<endl;
    // 4th --> string e(integer,'character');
    string e(5,'k');
    cout<<e<<endl;
    return 0;
}