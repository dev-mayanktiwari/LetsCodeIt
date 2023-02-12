// program to merge two sorted array
// I am using GAP algorithm you can use algorithm you want
#include<stdio.h>
#include<math.h>

void merge (int nums1[], int nums2[], int m, int n) {
   int i,j, temp, x;
   int gap=ceil((m+n)/2);
   int nums3[m+n];
   for (i=0;i<m;i++) {
        nums3[i]=nums1[i];
   } 
   for(j=0,x=m; j<n, x<(m+n); j++,x++) {
        nums3[x]=nums2[j];
   }
   while(gap>=1){
        for (i=0;i<(m+n);i++){
            while(i+gap<m+n){
                if(nums3[i]>nums3[i+gap]){
                temp=nums3[i];
                nums3[i]=nums3[i+gap];
                nums3[i+gap]=temp;
                }
                else 
                    break;
            }
        }
        gap=ceil(gap/2);
    }
    printf("Printing merged array\n");
    for (i=0;i<m+n;i++){
        printf("%d\t",nums3[i]);
    }
}

int main() {
    int x,y,i;
    printf("Enter the size of two arrays separated with spaces\n");
    scanf("%d" "%d", &x, &y);
    int array1[x];
    int array2[y];
    printf("Enter the sorted array 1 with spaces\n");
    for (i=0;i<x;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the elements of array 2 separated with spaces\n");
    for (i=0;i<y;i++){
        scanf("%d",&array2[i]);
    }
    merge(array1, array2, x, y);
}