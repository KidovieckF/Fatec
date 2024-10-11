/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 3

typedef struct valores{
    int vet[MAX]; 
    int resultado;
} valores;

    valores levet(){
        valores aux;
        for(int i = 0; i < MAX; i++){
        scanf("%d", &aux.vet[i]);
    }
        
    }

    valores somavet(){
        valores aux;
        aux.resultado = 0;
        int i;
        for(i = 0; i < MAX; i++){
            aux.resultado = aux.resultado + aux.vet[i];
        }
        printf("%d", aux.resultado);
        return aux;
    }


int main()
{
    levet();
    somavet();

    return 0;
}
