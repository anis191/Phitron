// 1st --> gpa aesending/min to max gpa
// 2nd --> if gpa is equal,than id asending/smaller id priority
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    float gpa;
};
bool cmp(Student a, Student b){
    if(a.gpa < b.gpa){
        return true;
    }else if(a.gpa > b.gpa){
        return false;
    }else{  // They are same gpa
        if(a.id < b.gpa){
            return true;
        }else{
            return false;
        }
    }
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