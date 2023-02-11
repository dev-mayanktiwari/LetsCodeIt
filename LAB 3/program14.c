// program to print digits of a number in new line
#include<stdio.h>
#include<math.h>

void digits(int n){
    int a;
    if (n==0){
        return;
    }
    a=n%10;
    digits(n/10);
    printf("%d\n",a);
}

int main() {
    int x;
    printf("Please input a number\n");
    scanf("%d",&x);
    digits(x);
}