#include<stdio.h>
#include<math.h>

int hcf(int a, int b) {
    if (b==0){
        return a;
    }
    return hcf(b, a%b);
}

int main() {
    int x, y, a;
    printf("Enter two numbers to calculate HCF\n");
    scanf("%d" "%d", &x, &y);
    a=hcf(x,y);
    printf("HCF of given numbers is %d ", a);    
}