//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int num, i;
    float sum = 0,p,n=2,d=3;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 1; i <= num ;i++)
    {
        p = n/d;
        sum += p;
        n += 2;
        d += 4;
    }

    printf("Approximate sum: %.1f",sum);
    return 0;
}
    
