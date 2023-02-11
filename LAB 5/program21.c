#include<stdio.h>
#include<math.h>

int sumofdigits(int n) {
    return (n==0) ? 0 : (n%10+sumofdigits(n/10));
}
  
int main() {
    int n, a;
    printf("Enter the number \n");
    scanf("%d", &n);
    a=sumofdigits(n); 
    printf("The sum of digits of the given number is %d ", a);   
}