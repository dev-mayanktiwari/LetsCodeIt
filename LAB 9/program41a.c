// program to sort a list of numbers using pointer
#include<stdio.h>
#include<math.h>

void sorting(int n, int *ptr){
    int i, j, temp;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (*(ptr+j)>*(ptr+i)){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }

    }
    printf("The sorted array is \n");
    for (i=0; i<n; i++) {
        printf("%d\t",*(ptr+i));
    }
}
int main() {
    int array[10]={56,78,34,22,66,75,98,65,33,10};
    sorting(10,array);

}