// searching of an array using linear search
#include<stdio.h>

int main() {
    int key, i;
    int array[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("Enter the key: ");
    scanf("%d", &key);
    for (i=0; i<10; i++) {
        if (array[i] == key) {
            printf("Element found at index %d\n", i);
            break;
        }
    }
    if (i == 10) {
        printf("Element not found\n");
    }
    return 0;
}

