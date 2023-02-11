// program to print the entire prime number btw 1 and 300
#include<stdio.h>
#include<math.h>

int main() {
    int i, j;
    int count;
    for (i=1; i<=300; i++){
        for (j=2; j<i; j++) { 
          if(i%j==0){
            count+=1;
          }
        }
        if (count==0){
            printf("%d\n", i);
        }
        count=0;
    }
}