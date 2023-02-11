// factorial of number using function
#include<stdio.h>
#include<math.h>

int fact(int n) {
    int i;
    int f=1;
    for (i=1; i<=n; i++) {
        f=f*i;
    }
    return f;
}

int main() {
    
}