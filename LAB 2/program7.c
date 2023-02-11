// program for fibonacci series
#include<stdio.h>
#include<math.h>

int main() {
    int a=0, b=1;
    int n, i, sum=0;
    printf("Enter number of terms, n\n");
    scanf("%d",&n);
    printf("Generating fibonacci series\n");
    printf("%d\t" "%d\t", a, b);
    for(i=3; i<=n; i++) {
        sum=a+b;
        printf("%d\t",sum);
        a=b;
        b=sum;
        
    }
}