/*
Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.
*/
int char_to_ascii(char ch){
    // character to integer convert trix: just sub(-) "0 as integer"
    int ascii = ch - 0;
    return ascii;
}
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int ascii = char_to_ascii(ch);
    printf("%d",ascii);
}