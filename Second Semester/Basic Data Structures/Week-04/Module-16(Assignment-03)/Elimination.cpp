#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    for(int t=1; t<=test; t++){
        string s; cin>>s;
        stack <char> st;
        for(char ch : s){
            if(ch == '0'){
                st.push(ch);
            }else if(ch == '1'){
                if(!st.empty() && st.top()=='0'){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }
        }
        if(st.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}