//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {

int num, sum = 0;        //Declaration
                                    
printf("Enter a number: ");
scanf("%d",&num);

for(int i = 1;i < num;i++)
{
 if(num % i ==0)
  sum += i;
}
 //To check for perfect number
 if(sum == num)
 {
    printf("%d is a perfect number",num);
 }
 else
 printf("%d is a not a perfect number",num);


return 0;
}
