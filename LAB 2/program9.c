// program to print the sum of the series fact(1)+fact(2)+.....
#include<stdio.h>
#include<math.h>

int main() {
    int n,i,j;
    int fact=1;
    int sum=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            fact=fact*j;
        }
        sum=sum+fact;
        fact=1;
    }
    printf("The required sum is %d", sum);
}
