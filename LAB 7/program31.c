// program to arrange a string in ascending order
#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    char s[100];
    int i, j, n, temp;
    printf("Enter the string to perform\n");
    gets(s);
    n=strlen(s);
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("The alphabetically arranged string is ");
    puts(s);
}