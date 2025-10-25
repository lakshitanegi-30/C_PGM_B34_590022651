// Rotate an array to the right by k positions.

#include <stdio.h>

int main()
 {
    int n, i,j,k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n],rot[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
     
    printf("Enter the position: ");
    scanf("%d",&k);
    
    int a = 0;
    for(i = k+1;i < n ;i++){
    rot[a++] = arr[i];
    }

    for(i = 0;i <= k ;i++){
    rot[a++] = arr[i];
    }
    
    printf("Rotated array\n");
    for(i = 0;i < n;i++)
    {
      printf("%d ",rot[i]);
    }
    
    return 0;
}
