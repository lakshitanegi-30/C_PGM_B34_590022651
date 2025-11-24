// Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int v = 0,c = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin); 
    
    for(int i = 0;str[i] != '\0';i++)
    {
        str[i] = toupper(str[i]);
        if (str[i] >= 'A' && str[i] <= 'Z')
   {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] =='O' || str[i] == 'U')
        v++;
        else
        c++;
    }
    }
    printf("Consonants: %d\n",c);
    printf("Vowels: %d",v);
    
    return 0;
}
