// factorial of number using function
#include<stdio.h>
#include<math.h>

int fact(int n) {
    int i;
    int f=1;
    for (i=1; i<=n; i++) {
        f=f*i;
    }
    return f;
}

int main() {
    int i, a;
    printf("Enter a number\n");
    scanf("%d",&i);
    a=fact(i);
    printf("The factorial of the given number is %d", a);
}