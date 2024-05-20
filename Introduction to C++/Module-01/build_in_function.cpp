#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    // max between a and  b:
    int mx = max(a,b);
    // max between all a to e:
    int mx_all = max({a,b,c,d,e});
    // min between a and  b:
    int mn = min(a,b);
    // min between all a to e:
    int mn_all = min({a,b,c,d,e});
    cout<<"mx = "<<mx<<" mx_all = "<<mx_all<<endl;
    cout<<"mn = "<<mn<<" mn_all = "<<mn_all<<endl;
    return 0;
}