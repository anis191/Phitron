#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    queue<int>q;
    int n,m; cin>>n>>m;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        st.push(x);
    }
    for(int i=1; i<=m; i++){
        int x; cin>>x;
        q.push(x);
    }
    if(st.size() != q.size()){
        cout<<"NO"<<endl;
    }else{
        bool yes = true;
        while(!st.empty()){
            if(st.top() != q.front()){
                yes = false;
                cout<<"NO"<<endl;
                break;
            }else{
                st.pop();
                q.pop();
            }
        }
        if(yes == true)
            cout<<"YES"<<endl;
    }
    return 0;
}