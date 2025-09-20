//Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
int num, sum = 0, tmp;

printf("Enter a number: ");
scanf("%d",&num);
tmp = num;

while(num != 0)
{
int digit = num % 10;
sum += digit;
num = num / 10;
}

printf("Sum of digits of %d is : %d",tmp,sum);

return 0;

}