// Min -->
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    float gpa;
};
int main(){
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].id>>a[i].gpa;
    }
    Student mn;
    mn.gpa = a[0].gpa;
    for(int i=1; i<n; i++){
        if(mn.gpa > a[i].gpa){
            mn = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.id<<" "<<mn.gpa<<endl;
    return 0;
}