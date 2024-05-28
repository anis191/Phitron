#include<bits/stdc++.h>
using namespace std;
void fun(string & a){ // use "&", for receive string address
    cout<<a<<" "<<a.size()<<endl;
    // update a:-
    a = "Anisul Alam_2314";
}
int main(){
    string a = "Hello World";
    fun(a);
    cout<<a<<" "<<a.size()<<endl;
    return 0;
}