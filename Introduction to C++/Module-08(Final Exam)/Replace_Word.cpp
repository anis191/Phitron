#include<bits/stdc++.h>
using namespace std;
int check(string & s, string & x, int i){
    int position = i,yes=1,j=1;
    i = i+1;
    for(int k=1; k<x.size(); k++){
        if(i<s.size() && s[i] == x[k]){
            yes++; i++; j++;
        }else{
            return position+j;
        }
    }
    if(yes == x.size()){
        s.replace(position,x.size(),"#");
        return position+1;
    }else{
        return position+j;
    }
}
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        string s,x; cin>>s>>x;
        int i=0;
        while(i < s.size()){
            if(s[i] == x[0]){
                int position = check(s,x,i);
                i = position;
            }else{
                i++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}