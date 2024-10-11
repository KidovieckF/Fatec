/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    int ini, fim;
    char aux;
    fgets(palavra, 50, stdin);
    
    int tamP = strlen(palavra) - 1;
    
    for(ini=0, fim=tamP - 1; fim>=ini ; ini++, fim--){
        aux = palavra[ini];
        palavra[ini] = palavra[fim];
        palavra[fim] = aux;
        
        
        
    }

    printf("String invertida: %s", palavra);
    return 0;
}
