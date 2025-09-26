//Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int n, i, temp, f, sum = 0;

    // Input a number
    printf("Enter a number : ");
    scanf("%d", &n);
    
    temp = n;

    while(n > 0)
    {
        int digit = n % 10;
        f = 1;
        
        for (i = 1; i <= digit; i++) {
        f = f * i;
        }
        sum += f;
        n = n / 10;
    }
    
    if (temp == sum)                       
    { 
        printf("%d is an strong Number. \n ",temp);
    }

    else
    {
        printf("%d is not a strong Number. \n ",temp);
    }

    return 0;
}                
