// program to print the given no in words
#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    char s[50];
    int i,n;
    int flag=1;
    printf("Enter the number \n");
    gets(s);
    n=strlen(s);
    for (i=0; i<n; i++){
        if (flag==1) {    
            switch (s[i])
            {
            case '0':
                printf("zero ");
                break;
            case '1':
                printf("one ");
                break;
            case '2':
                printf("two ");
                break;
            case '3':
                printf("three ");
                break;
            case '4':
                printf("four ");
                break;
            case '5':
                printf("five");
                break;
            case '6':
                printf("six ");
                break;
            case '7':
                printf("seven ");
                break;
            case '8':
                printf("eight ");
                break;
            case '9':
                printf("nine ");
                break;
            default:
                flag=0;
                printf("Please check the string");
                break;
            }
        }
    }
}