// fibonacci series using function
#include<stdio.h>
#include<math.h>

void fibo(int n){
    int a=0, b=1;
    int i, sum=0;
    printf("Fibonacci series %d\t %d\t", a, b);
    for (i=3; i<=n; i++){
        sum=a+b;
        printf("%d\t", sum);
        a=b;
        b=sum;
    }
}

int main() {
    int x;
    printf("Enter the number of terms, n\n");
    scanf("%d" ,&x);
    fibo(x);
}