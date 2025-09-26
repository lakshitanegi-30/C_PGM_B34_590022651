//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int num, i;
    float sum = 1,p,n=3,d=4;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 1; i <= num - 1;i++)
    {
        p = n/d;
        sum += p;
        n += 2;
        d += 2;
    }

    printf("Approximate sum: %.1f",sum);
    return 0;
}
    