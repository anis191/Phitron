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
    int total;
};
bool cmp(Student a, Student b){
    if(a.total > b.total){
        return true;
    }else if(a.total < b.total){
        return false;
    }else{
        if(a.id < b.id){
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
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].m>>a[i].e;
        a[i].total = a[i].m + a[i].e;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].m<<" "<<a[i].e<<endl;
    }
    return 0;
}