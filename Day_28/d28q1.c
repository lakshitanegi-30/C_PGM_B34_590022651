//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {

int n,i,j,c;
printf("Enter a number: ");
scanf("%d",&n);

printf("The prime numbers are: ");
for(i = 2;i <= n;i++){
  c =0;
  
  for(j = 1;j <= i;j++){
   if (i % j == 0)
         c++;
      
  }
  if (c == 2)
  printf("\n%d",i);
}
  return 0;
}
