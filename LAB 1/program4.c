// program to find greatest of three numbers using nested if else
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    printf("Enter three numbers separated with spaces\n");
    scanf("%f" "%f" "%f" ,&a, &b, &c);
    if(a>b){
        if (a>c) {
            printf("The greatest element is %f", a);
        }
        else {
            printf("The greates element is %f" , c);
        }
    }
    else {
        if (b>c) {
            printf("The gretaest element is %f", b);
        }
        else {
            printf("The greatese element is %f", c);
        }
    }
}
