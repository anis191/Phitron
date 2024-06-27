#include<bits/stdc++.h>
using namespace std;
void fun(int* &ptr){
    ptr = NULL; //(Change value in main, without dereference)!
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    // ptr = NULL;
    cout<<*ptr<<endl;
    return 0;
}