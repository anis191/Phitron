/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    queue<int>q_copy;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        q.push(x);
    }
    stack<int>st;
    while(! q.empty()){
        int k = q.front();
        q.pop();
        st.push(k);
    }
    while(! st.empty()){
        int k = st.top();
        st.pop();
        q_copy.push(k);
    }
    while(! q_copy.empty()){
        cout<<q_copy.front()<<" ";
        q_copy.pop();
    }
    return 0;
}