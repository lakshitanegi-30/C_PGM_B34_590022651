//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int  r, c;
    int i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);

    if (r != c) {
    printf("Matrix must be square to be symmetric.\n");
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
    for(j = 0; j < c; j++)
    {
      if (arr[i][j] != arr[j][i]) {
      printf("The matrix is not symmetric.\n");
      return 0;   
    }
  }
}
  printf("The matrix is symmetric.\n");
 
  return 0;
}