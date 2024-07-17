/*
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>myStack2;
    while(!myStack.empty()){
        int k = myStack.top();
        myStack.pop();
        myStack2.push(k);
    }
    myStack.push(x);
    while(!myStack2.empty()){
        int k = myStack2.top();
        myStack2.pop();
        myStack.push(k);
    }
    return myStack;
}
*/