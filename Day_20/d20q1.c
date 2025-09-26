//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int num, pro = 1, digit;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Preserve original number

    while(num != 0)
    {
        digit = num % 10;

        if(digit % 2 != 0){
            pro *= digit;
        }

        num = num / 10;
    }

    if (pro == 1 && temp % 2 == 0) {
        // No odd digits found
        printf("1 (no odd digits, assume 1)\n");
    } else {
        printf("%d\n", pro);
    }

    return 0;
}
