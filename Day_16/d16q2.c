//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
 
int num,temp, rev = 0;         //Declaration
printf("Enter a number: ");
scanf("%d",&num);

temp = num; 

while (num != 0)
     {
        int digit = num % 10;         // Get last digit
        rev = rev * 10 + digit; 
        num = num / 10;               // Remove last digit
    }

    if (temp == rev)
    { 
        printf("Palindrome");
    }
    else{
         printf("Not Palindrome");
    }
return 0;
    
}