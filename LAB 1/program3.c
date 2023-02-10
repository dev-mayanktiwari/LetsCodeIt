// program to find roots of a quadratic equation
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, d, e, root1, root2;
    printf("Please enter the coefficient a, b, c of a standard quadratic equation separated with spaces\n");
    scanf("%f" "%f" "%f", &a, &b, &c);
    d=b*b-(4*a*c);
    if (d<0){
        printf("Sorry!! Roots are imaginary\n");
    }
    else{
        e=sqrt(d);
        root1=((-b)+e)/(2*a);
        root2=((-b)-e)/(2*a);
        printf("The roots of the given equation are %f and %f", root1, root2);
    }
}