#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    char a[20];
    cin >> a; //It take input string without space
    char b[100];
    getchar(); //For ignore space(Enter button)
    cin.getline(b,100);
    cout << a << "\n" <<b;
    return 0;
}