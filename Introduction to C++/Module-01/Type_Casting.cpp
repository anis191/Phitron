#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // int to long long int
    long long int l = (long long int)(a);
    char c;
    cin>>c;
    // char to int
    int i = int(c);
    cout<<l<<" "<<i;
}