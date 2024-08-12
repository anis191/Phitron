#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    for(int t=1; t<=test; t++){
        stack<char>st;
        string s; cin>>s;
        for(char c: s){
            st.push(c);
        }
        int zero=0,one=0;
        while(! st.empty()){
            if(st.top() == '0')
                zero++;
            else
                one++;
            st.pop();
        }
        if(zero == one)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}