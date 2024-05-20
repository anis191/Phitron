#include<iostream>
using namespace std;
int main(){
    // Switch Case Syntax -->
    /*
    switch(parameter){
        case 1:
            //code
            break;
        case 2:
            //code
            break;
        default:
            //code
    }
    */
    int number;
    cin >> number;
    switch(number % 2){
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
        return 0;
    }
}