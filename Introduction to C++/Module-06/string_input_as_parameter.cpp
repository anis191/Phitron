#include<bits/stdc++.h>
using namespace std;
void fun(string a){
    cout<<a<<endl;
    cout<<a.size()<<endl;
    // update a;
    a = "New string";
    cout<<a<<endl;
}
int main(){
    string a = "hello world";
    fun(a);
    cout<<a<<endl;
    return 0;
}