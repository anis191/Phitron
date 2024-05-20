#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a;
    double b,d;
    cin>>a>>b>>d;
    cout<<fixed<<setprecision(3)<<a<<endl;
    cout<<fixed<<setprecision(2)<<b<<endl;
    cout<<fixed<<setprecision(4)<<d<<endl;
    return 0;
}