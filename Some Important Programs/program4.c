// program to calculate the power of a number using recursion
#include<stdio.h>
#include<math.h>

int myfun(int x, int y) {
    return (y==0) ? 1 : x*pow(x,y-1);
}
int main() {
    int a, b, c;
    printf("Enter the base number\n");
    scanf("%d", &a);
    printf("Enter the power to raise\n");
    scanf("%d",&b);
    c=myfun(a,b);
    printf("The result is %d ", c);
}
