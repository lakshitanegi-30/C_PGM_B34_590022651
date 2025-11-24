// Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    
    printf("Reversed string: ");
    
    for(int i = len;i >= 0;i--)
    {
        printf("%c",str[i]);
    }
return 0;
}
