//Add two matrices.

#include <stdio.h>
int main() {
    int  r, c;
    int i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    
    int a1[r][c];
    int a2[r][c];
    int a3[r][c];
    
    printf("Enter the elements of first array:\n");
    for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
    scanf("%d", &a1[i][j]);
   
    }
}
     printf("Enter the elements of second array:\n");
    for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
    scanf("%d", &a2[i][j]);
    
    }
}
  for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
        a3[i][j] = a1[i][j]+a2[i][j];
        printf("%d",a3[i][j]);
    }
    printf("\n");
}
    return 0;
}
