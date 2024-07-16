/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.
*/
#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(v.size() == 0)
            return true;
        else
            return false;
    }
};
int main(){
    myStack st1,st2;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        st1.push(x);
    }
    int m; cin>>m;
    for(int i=1; i<=m; i++){
        int x; cin>>x;
        st2.push(x);
    }
    if(n == m){
        bool yes = true;
        while(!st1.empty()){
            if(st1.top() != st2.top()){
                yes = false;
                cout<<"NO"<<endl;
                break;
            }else{
                st1.pop();
                st2.pop();
            }
        }
        if(yes == true)
            cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}