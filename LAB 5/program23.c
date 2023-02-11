// program to convert binary to decimal using recursion
#include<stdio.h>
#include<math.h>

int convert(int n) {
    return(n==0) ? 0 : (n%10+2*convert(n/10));
}

int main() {
    int x, a;
    printf("Enter a binary number to convert to decimal\n");
    scanf("%d", &x);
    a=convert(x);
    printf("The equivalent decimal number is %d ", a);    
}