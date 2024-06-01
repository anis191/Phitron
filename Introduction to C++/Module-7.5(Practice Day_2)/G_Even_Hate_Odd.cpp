#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(n % 2 == 0){
            int even = 0, odd = 0;
            int Total_operation = 0;
            for(int i=0; i<n; i++){
                if(arr[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
            if(even > odd){
                Total_operation = (n/2) - odd;
                cout<<Total_operation<<endl;
            }else if(even < odd){
                Total_operation = (n/2) - even;
                cout<<Total_operation<<endl;
            }else{
                Total_operation=0;
                cout<<Total_operation<<endl;
            }
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}