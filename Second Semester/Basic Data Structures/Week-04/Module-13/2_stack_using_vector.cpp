#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int>v;
    //push() function:- [O(1)]
    void push(int val){
        v.push_back(val);
    }
    //pop() function:- [O(1)]
    void pop(){
        v.pop_back();
    }
    //top() function:- [O(1)]
    int top(){
        return v.back();
    }
    //size() function:- [O(1)]
    int size(){
        return v.size();
    }
    //empty() function:- [O(1)]
    bool empty(){
        if(v.size() == 0)
            return true;
        else
            return false;
    }
};
int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl; //there is no "top" in the stack.That's why it will give a error.
    return 0;
}