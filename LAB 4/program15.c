// program to return the sum of all digits entered through a number using a function.
#include<stdio.h>
#include<math.h>

int sumodddigits(int n){
    int r;
    int sum=0;
    while (n!=0){
        r=n%10;
        if (r%2!=0){
            sum=sum+r;
        }
        n=n/10;
    }
    return sum;
}
int main() {
    int x, w;
    printf("Enter the digit\n");
    scanf("%d",&x);
    w=sumodddigits(x);
    printf("%d",w);
    
}