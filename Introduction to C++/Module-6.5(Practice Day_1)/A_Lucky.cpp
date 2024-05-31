#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
    string a; cin>>a;
    int first_sum=0,second_sum=0;
    for(int i=0; i<3; i++){
        first_sum += int(a.at(i));
    }
    for(int i=3; i<6; i++){
        second_sum += int(a.at(i));
    }
    if(first_sum == second_sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}