// Count characters in a string without using built-in length functions.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin); 

     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') 
        break;
        count++;
    }

    printf("Total characters: %d\n", count);
    return 0;

}
