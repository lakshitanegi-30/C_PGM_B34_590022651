//Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int  r, c;
    int i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    
    int arr[r][c];

    printf("Enter the array elements:\n");
    for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
    scanf("%d", &arr[i][j]);
}
  }
 

  printf("Transpose matrix: \n");

   for(i = 0; i < c; i++)
    {
    for(j = 0; j < r; j++)
    {
    printf("%d ", arr[j][i]);
}
printf("\n");
  }
  return 0;
}