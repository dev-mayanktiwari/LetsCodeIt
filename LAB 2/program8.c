// program to check whether a number armstrong or not
#include<stdio.h>
#include<math.h>

int main() {
    int n, rem, i;
    int sum=0;
    int chk;
    printf("Please enter a number to check\n");
    scanf("%d", &n);
    chk=n;
    while(n!=0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if (sum==chk) {
        printf("The given number is armstrong");
    }
    else {
        printf("The given number is not armstrong");
    }
}