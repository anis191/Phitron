/*
#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int>st;
    while(!q.empty()){
        int k = q.front();
        q.pop();
        st.push(k);
    }
    while(! st.empty()){
        int k = st.top();
        st.pop();
        q.push(k);
    }
    return q;
}
*/