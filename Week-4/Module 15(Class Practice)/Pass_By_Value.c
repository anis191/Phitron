#include<stdio.h>
void pass_value_changeing_test(int a){
    // eai function er "a" variable ti main function er variable er duplicate version
    a = 20;
    printf("User function er a: %d\n",a);
}
int main(){
    int a;
    scanf("%d",&a);
    pass_value_changeing_test(a);
    printf("Main function er a: %d\n",a);
}