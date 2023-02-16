#include <stdio.h>
#include <math.h>

int check(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void isprime(int x, int y, FILE *t) {
    int i;
    int count = 0;
    for (i = x; i <= y; i++) {
        if (check(i)) {
            fprintf(t, "%d\n", i);  // add a newline character after each number
        }
    }
}

int main() {
    FILE *file;
    file = fopen("primenumbers.txt", "w");
    isprime(1, 100, file);    
    fclose(file);
    return 0;
}

