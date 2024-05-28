#include<bits/stdc++.h>
using namespace std;
void func(stringstream & abc){
    string i;
    while(abc >> i){
        cout<<i<<endl;
    }
    return;
}
int main(){
    string a; getline(cin,a);
    stringstream abc;
    abc << a;
    func(abc);
    return 0;
}