//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() 
{
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
 
  for(i = 0; i < r; i++)
    {
    for(j = 0; j < i; j++)
 {
       if(arr[i][i] == arr[j][j])
    {
        printf("Diagonal elements are not distinct");
        return 0;   
    }
  }
}
printf("Diagonal elements are distinct");

return 0;
}
