#include<iostream>
using namespace std;
int main(){
    // Dynamic variable syntax -->
    // int *a = new int;
    int *a = new int;
    cin >> *a;
    cout<<"Before delete(address):"<<a<<endl;
    cout<<"Ans is(before delete):"<< *a <<endl;
    // Now delete the variable from heap mamory
    delete a;
    cout<<"After delete(address):" << a<<endl;
    cout<<"Ans is(after delete):"<< *a<< endl;
    return 0;
}