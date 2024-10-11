/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * concatena(char *s1, char*s2);

int main()
{
    char s1m[100], s2m[100], *v;
    fgets(s1m, 100, stdin);
    s1m[strlen(s1m)- 1] = '\0';
    fgets(s2m, 100, stdin);
    s2m[strlen(s2m) - 1] = '\0';
    v = concatena(s1m, s2m);
    printf("%s\n", v);
    free(v);
    return 0;
}

char * concatena(char *s1, char*s2){
    char *v = NULL;
    int tam = strlen(s1); 
    int tam2 = strlen(s2);
    int tamSoma = tam + tam2 + 1;
    v = malloc(tamSoma * sizeof(char));
    int i;
    for(i = 0; i < tam; i++){
        v[i] = s1[i];
    }
    for(i = 0 ; i < tam2; i++){
        v[i + tam] = s2[i];
        v[tam + tam2] = '\0';
        
        
    }
    return v;
}








