#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin>>n>>e;
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    while(e--){
        int a,b; cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    //Check a edge is exiest or not:
    if(matrix[5][1] == 1){
        cout<<"Edge found"<<endl;
    }else{
        cout<<"No edge"<<endl;
    }
    return 0;
}