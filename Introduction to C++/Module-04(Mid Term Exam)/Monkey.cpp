#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100001];
    while(cin.getline(a,100001)){
        int c[26];
        for(int i=0; i<26; i++)
            c[i] = 0;
        int j=0;
        while(a[j] != '\0'){
            if(a[j] == ' '){
                j++;
                continue;
            }else{
                c[a[j] - 97]++;
                j++;
            }
        }
        for(int i=0; i<26; i++){
            if(c[i] != 0){
                for(int j=1; j<=c[i]; j++)
                    cout<<char(i+97);
            }
        }
        cout<<endl;
    }
    return 0;
}