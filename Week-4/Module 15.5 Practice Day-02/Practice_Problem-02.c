/*
Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
Note: The string will not have any spaces.
*/
#include<stdio.h>
int my_len(char *a){
    int count = 0;
    for(int i=0; a[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char a[100];
    scanf("%s",a);
    int count = my_len(a);
    printf("%d",count);
}