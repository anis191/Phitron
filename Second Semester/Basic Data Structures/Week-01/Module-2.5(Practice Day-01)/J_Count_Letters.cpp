//Use vector as frequency array
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>v(26, 0);
    for(char ch: s){
        v[ch - 97]++;
    }
    int index = 0;
    for(int i:v){
        if(i != 0){
            cout<<char(index+97)<<" : "<<i<<endl;
            index++;
        }else{
            index++;
        }
    }
    return 0;
}