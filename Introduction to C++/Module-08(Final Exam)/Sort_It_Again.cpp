#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int m;
    int e;
};
bool cmp(Student a, Student b){
    if(a.e > b.e){
        return true;
    }else if(a.e < b.e){
        return false;
    }else{
        if(a.m > b.m){
            return true;
        }else if(a.m < b.m){
            return false;
        }else{
            return a.id < b.id;
        }
    }
}
int main(){
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].m>>a[i].e;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].m<<" "<<a[i].e<<endl;
    }
    return 0;
}