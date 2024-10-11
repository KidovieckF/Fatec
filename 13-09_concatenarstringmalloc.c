#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concatenar(char* str1, char* str2)
{
    char *res = malloc(sizeof(str1) + sizeof(str2));
    int aux = 0;
    
    for(int i = 0; i < strlen(str1); i++)
    {
        res[aux] = str1[i];
        aux++;
    }
    for(int i = 0; i < strlen(str2); i++)
    {
        res[aux] = str2[i];
        aux++;
    }
    
    return res;
}

int main()
{
    char string1[5], string2[5];
    char * str3 = concatenar(string1, string2);
    
    
    free(str3);
    return 0;
}
