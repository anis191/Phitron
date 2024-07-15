#include<bits/stdc++.h>
using namespace std;
int main(){
    //Syntax --> stack <type> stack_name;
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(! st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}