/*__________________
#include<iostream> |
#include<string>   |
#include<string.h> |
#include<iomanip>  |--> #include<bits/stdc++.h>
#include<algorithm>|
#include<utility>  |
#include<stdio.h>  |
____________________
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mx = max(a,b);
    cout<<a<<" "<<mx<<endl;
    return 0;
}
