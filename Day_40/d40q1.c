//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int r, c;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &r, &c);

    int arr[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (int d = 0; d <= r + c - 2; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
