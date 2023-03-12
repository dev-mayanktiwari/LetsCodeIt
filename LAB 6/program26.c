//program to merge two sorted arrays and no element is repated 
#include<stdio.h>

void mergeArrays(int nums1[], int nums2[], int m, int n, int nums3[]) {
    int i = 0, j = 0, k = 0;

    // loop through both arrays until one of them is exhausted
    while (i < m && j < n) {
        // compare elements of both arrays
        if (nums1[i] < nums2[j]) {
            nums3[k++] = nums1[i++];
        } else {
            nums3[k++] = nums2[j++];
        }
    }

    // add any remaining elements from the first array
    while (i < m) {
        nums3[k++] = nums1[i++];
    }

    // add any remaining elements from the second array
    while (j < n) {
        nums3[k++] = nums2[j++];
    }
}

int main() {
    int m, n, i;
    printf("Enter the size of the first sorted array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter the elements of the first sorted array: \n");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter the size of the second sorted array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter the elements of the second sorted array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int nums3[m + n];
    mergeArrays(nums1, nums2, m, n, nums3);

    printf("Merged sorted array: \n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", nums3[i]);
    }
    printf("\n");

    return 0;
}
