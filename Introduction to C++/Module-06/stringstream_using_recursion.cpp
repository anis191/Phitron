#include<bits/stdc++.h>
using namespace std;
void func(stringstream & abc){
    string i;
    if(abc >> i){   // base case
        cout<<i<<endl;
        func(abc);  // recursive call
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