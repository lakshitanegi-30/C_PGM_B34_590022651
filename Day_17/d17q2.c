//Write a program to check if a number is prime.

#include <stdio.h>
int main() {

int num, count = 0;        //Declaration
printf("Enter a number: ");
scanf("%d",&num);

int i;
for(i =1;i <=num;i++)
{
    if(num % i ==0)
    count ++;
}

 //To check for prime number
if (count == 2) {
printf("It is a prime number");
}
else
printf("It is not a prime number");

return 0;
}