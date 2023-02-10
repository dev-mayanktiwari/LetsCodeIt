// program to calculate the area of triangle using heron's formula
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter the sides of the triangle separated with space\n");
    scanf("%f" "%f" "%f",&a, &b, &c);
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %f", area);
}