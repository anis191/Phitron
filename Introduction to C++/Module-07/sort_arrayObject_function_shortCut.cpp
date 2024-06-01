// Custom Comparison Function:-
// Syntax --> sort(a, a+n, cmp);
// cmp syntax -->
/*
bool cmp (classDataType a, classDataType b){
    //code;
}
*/
// Aesending Orderd -->
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    float gpa;
};
bool cmp(Student a, Student b){
    return a.gpa<b.gpa;
}
int main(){
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].id>>a[i].gpa;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].gpa<<endl;
    return 0;
}