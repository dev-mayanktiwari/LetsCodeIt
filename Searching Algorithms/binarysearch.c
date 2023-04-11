// binary search of a given array

#include<stdio.h>
#include<math.h>

int main() {
    int key, f, l, m;
    int array[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("Enter the key: ");
    scanf("%d", &key);
    f=0;
    l=9;
    m=(l+f)/2;
    while (f <= l) {
        if (array[m] == key) {
            printf("Element found at index %d\n", m);
            break;
        } else if (array[m] < key) {
            f = m + 1;
        } else {
            l = m - 1;
        }
        m = (l+f)/2;
    }
    if (f > l) {
        printf("Element not found\n");
    }
    return 0;
}
