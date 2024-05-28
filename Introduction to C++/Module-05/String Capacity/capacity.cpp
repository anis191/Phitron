#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "Hello World";
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;

    string b = "Hy, how are you?";
    cout<<b<<" "<<b.size()<<endl;
    b.clear();
    cout<<b<<""<<b.size();
    return 0;
}