//Write a program to print all factors of a given number.

#include <stdio.h>
int main() {

int num;        //Declaration
                                    
printf("Enter a number: ");
scanf("%d",&num);

printf("Factors are: \n ");

for(int i = 1;i <= num;i++)
{
 if(num % i ==0)
 {
    printf("%d\n",i);
 }
}

return 0;
}
