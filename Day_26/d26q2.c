/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */

#include <stdio.h>

int main() {
    int i, s,j;

    for (i = 1; i <= 5; i++) 
    {
    if (i == 1 || i == 5)
     s = 1;
    
     else if(i == 2 || i == 4)
     s = 3;
     
     else 
     s = 5;

    for (j = 1; j <=s;j++) 
    {
   printf("*\n");
    }
   printf("\n");
    
  }
    return 0;
}
