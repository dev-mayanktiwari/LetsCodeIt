// program to print series 1-(x1/1!)+(x2/2!)+.......
#include<stdio.h>
#include<math.h>

int fact (int x) {
    return (x==1 || x==0) ? 1: x*fact(x-1);
}
int main() {
    float x, i, j, temp, n;
    float res=0;
    printf("Enter the value of x\n");
    scanf("%f" , &x);
    printf("Enter the value of number of terms, n\n");
    scanf("%f" , &n);
    for (i=0; i<=n; i++){
        j=i-1;
        temp=pow(-1,i)*(pow(x,i)/fact(i));
        res=res+temp;
    }
    printf("The required sum of the series is %f", res);
}