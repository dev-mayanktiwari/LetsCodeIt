// program to convert decimal to binary using recursion
#include<stdio.h>
#include<math.h>

void convert(int n) {
    int r;
    if (n==0){
        return ;
    }
    r=n%2;
    convert(n/2);
    printf("%d",r);
}

int main() {
    int x, a;
    printf("Enter a decimal number to convert to decimal\n");
    scanf("%d", &x);
    convert(x); 
}