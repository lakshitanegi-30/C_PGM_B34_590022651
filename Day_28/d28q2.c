//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n,arr[100];

    printf("Enter the  number of elements: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    printf("Array elements: ");
     for (int i = 0; i < n; i++){
    printf("%d ",arr[i] );
     }
     printf("\n");
    return 0;
}
