// program to reverse the string through pointer
#include<stdio.h>
#include<math.h>
#include<string.h>

void reverse (char *string, int a, int b) {
    char temp;
    if (a>=b) {
        return;
    }
    else {
        temp=*(string+a);
        *(string+a)=*(string+b);
        *(string+b)=temp;
        reverse(string,a+1,b-1);
    }
}

int main() {
    char s[100];
    printf("Enter the string: \n");
    scanf("%s", s);
    reverse(s, 0, strlen(s)-1);
    printf("The reversed string is %s: ", s);

    
}