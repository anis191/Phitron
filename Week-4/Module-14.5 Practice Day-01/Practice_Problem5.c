/*
Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be capital alphabets and call that function to get the small alphabet and print that in the main function.
*/
#include<stdio.h>
char capital_to_small(char ch){
    ch = ch + 32;
    return ch;
}
int main(){
    char ch;
    scanf("%c",&ch);
    ch = capital_to_small(ch);
    printf("%c",ch);
}