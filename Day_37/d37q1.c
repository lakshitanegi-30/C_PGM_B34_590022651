//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &r, &c);

    int arr[r][c];
    int rowSum[r];  // array to store sum of each row

    printf("Enter the array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        rowSum[i] = sum;
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < r; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
