// program to remove all blank spaces from a string and print it.
#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    char s[100];
    int n,i,j;
    printf("Enter the string which has spaces\n");
    gets(s);
    n=strlen(s);
    for (i=0;i<n-1;i++){
        if (s[i]==32){
            for (j=i;j<n;j++){
                s[j]=s[j+1];
            }
        }
    }
    printf("The string after removing spaces is ");
    puts(s);
}