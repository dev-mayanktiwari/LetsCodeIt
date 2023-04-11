// Write a program to read number from file and 
// then write all 'odd' number to file ODD.txt & all even to file EVEN.txt

#include<stdio.h>
#include<math.h>

int main() {
    FILE *file1, *file2, *file3;
    int i;
    file1 = fopen("numbers.txt","r");
    file2 = fopen("odd.txt","w");
    file3 = fopen("even.txt","w");
    while (fscanf(file1, "%d", &i)==1) {
        if (i % 2 == 0) {
            fprintf(file3, "%d\n", i);
        }
        else {
            fprintf(file2, "%d\n", i);
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}
