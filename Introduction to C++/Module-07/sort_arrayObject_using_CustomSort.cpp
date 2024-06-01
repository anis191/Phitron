#include<bits/stdc++.h>
using namespace std;
class abc{
    public:
    char ch;
    int value;
};
bool cmp(abc x, abc y){
    if(x.value > y.value){
        return true;
    }else{
        return false;
    }
// Short Cut -->
    //return x.value > y.value;
}
int main(){
    string a; cin>>a;
    abc count[26];
    for(int i=0; i<26; i++){
        count[i].ch = char(i+97);
        count[i].value = 0;
    }
    for(char i : a){
        count[i-97].value++;
    }
    sort(count,count+26,cmp);
    for(int i=0; i<26; i++){
        if(count[i].value != 0){
            for(int j=1; j<=count[i].value; j++){
                cout<<count[i].ch;
            }
        }
    }
    return 0;
}