// program to print the series fact(1)+fact(2)+.....+fact(n) using function
#include<stdio.h>
#include<math.h>

int sum(int n){
    int i, j;
    int fact=1;
    int sum=0;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            fact=fact*j;
        }
        sum = sum+fact;
        fact=1;
    }
    return sum;
}


int main() {
    int x, a;
    printf("Enter the number of terms, n\n");
    scanf("%d",&x);
    a=sum(x);
    printf("The required sum is %d", a);
}