// program to print armstrong numbers between 100 to 500
#include<stdio.h>
#include<math.h>

int main() {
    int n, i, rem,m;
    int sum;
    for(i=100; i<=500; i++) {
        n=i;
        m=i;
        sum=0;
        while(m!=0){
            rem=m%10;
            sum=sum+pow(rem,3);
            m=m/10;
        }
        if (sum==n){
            printf("%d\n", n);
        }
    }    
}