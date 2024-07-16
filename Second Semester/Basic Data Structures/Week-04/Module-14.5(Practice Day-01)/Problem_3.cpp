/*
Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>st_copy;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        st.push(x);
    }
    while(! st.empty()){
        int k = st.top();
        st.pop();
        st_copy.push(k);
    }
    while(! st_copy.empty()){
        cout<<st_copy.top()<<" ";
        st_copy.pop();
    }
    return 0;
}