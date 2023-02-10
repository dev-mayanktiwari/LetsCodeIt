// value of y for particular value of n
#include<stdio.h>
#include<math.h>

int main() {
    int a, b, x, res, ch;
    printf("Please enter the value of a,b and x separated with spaces\n");
    scanf("%d" "%d" "%d", &a, &b, &x);
    printf("Plese enter your choice\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        res=(a*x)%b;
        printf("The required result is %d", res);
        break;
    case 2:
        res=(a*x*x)+(b*b);
        printf("The required result is %d", res);
        break;
    case 3:
        res=(a)-(b*x);
        printf("The required result is %d", res);
        break;
    case 4:
        res=(a)+(x/b);
        printf("The required result is %d", res);
        break;
    default:
        printf("Please recheck your choice and try again");
    }
}