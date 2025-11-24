// Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100],temp[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    temp = str;
    int len = strlen(str);
    
    printf("Reversed string: ");
    
    for(int i = len;i >= 0;i--)
    {
        printf("%c",str[i]);
    }

    if(str == temp)
    {
        printf("String is palindrome");
    }
    else
        printf("String is not palindrome");

return 0;
}