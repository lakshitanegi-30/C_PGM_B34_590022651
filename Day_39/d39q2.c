//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int  r, c;
    int i, j,sum = 0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    
    if(r != c)
    {
        printf("Matrix must be a square matrix");
        return 0;
    }
    int arr[r][c];

    printf("Enter the array elements:\n");
    for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
    scanf("%d", &arr[i][j]);
}
  }
 
  for(i = 0; i < r; i++)
    {
         sum += arr[i][i];
        }

printf("Sum of main diagonal = %d", sum);

return 0;
}