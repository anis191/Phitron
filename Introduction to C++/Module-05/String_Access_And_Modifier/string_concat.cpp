#include<bits/stdc++.h>
using namespace std;
int main(){
    // Process-1(using pius[+] sign)
    string a = "Hello ";
    string b = "World";
    a = a+ b;
    cout<<a<<endl;
    // Process-1(using pius[+=] sign) --> best/most usable
    string c = "Anisul ";
    string d = "Alam";
    c += d;
    cout<<c<<endl;
    // Process-1(using .append() function)
    string e = "C and ";
    string f = "C++";
    e.append(f);
    cout<<e<<endl;
    return 0;
}