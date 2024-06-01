#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    float gpa;
};
bool cmp(Student a, Student b){
    /*if(a.gpa > b.gpa){
        return true;
    }else if(a.gpa < b.gpa){
        return false;
    }else{  // They are same gpa
        if(a.id < b.gpa){
            return true;
        }else{
            return false;
        }
    }*/
// For gpa dscending(if gpa(==),than id ascending)
    if(a.gpa == b.gpa)
        return a.id < b.id;
    else
        return a.gpa > b.gpa;
// For gpa ascending(if gpa(==),than id ascending)
    /*if(a.gpa == b.gpa)
        return a.id < b.gpa;
    else
        return a.gpa < b.gpa;*/
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