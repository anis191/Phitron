#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {40, 50, 10, 0, 20};
    // Ascending sort:-
    // sort(starting_pointer, ending_pointer)
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl; // Optionally add a newline at the end
    
    // Desending sort:-
    // sort(starting_pointer, ending_pointer, greater<int>())
    sort(a,a+5,greater<int>());
    for (int i = 0; i < 5; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}