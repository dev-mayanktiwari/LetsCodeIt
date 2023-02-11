// program of factorial using recursion
#include<stdio.h>
#include<math.h>

int fact(n) {
    return (n==1 || n==0) ? 1 : n*fact(n-1);
}

int main() {
    int n, a;
    printf("Enter the number to calculate factorial\n");
    scanf("%d", &n);
    a=fact(n);
    printf("The factorial of the given number is %d ", a);

}