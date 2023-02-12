// program to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>

int main() {
    char s[30];
    int i, len;
    int counter=0;
    printf("Please enter the string to check\n");
    scanf("%s",&s);
    len=strlen(s);
    for (i=0; i<len; i++) {
        if(s[i] != s[len-1-i]){
           counter=1;
           break; 
        }
        counter=0;
    }
    if (counter) {
        printf("%s is not palindrome",s);
    }
    else {
        printf("%s is palindrome", s);
    }
}