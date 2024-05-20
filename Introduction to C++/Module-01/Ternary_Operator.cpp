#include<iostream>
using namespace std;
int main(){
    // check a number is Even or odd:-
    // Syntax --> (condition)? True : False;
    int a;
    cin>>a;
    (a % 2 == 0)?cout<<"Even"<<endl:cout<<"Odd"<<endl;
    return 0;
}