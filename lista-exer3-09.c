/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet1[50], tam, i = 0, j, c, ind = 0;
    
    scanf("%d", &tam);
    while(i < tam){
        scanf("%d", &vet1[i]);
        i++;
    }
    scanf("%d", &c);
    
    for(i = 0; i < tam; i++){
        if(i == 0){
            j = 1;
        } else j = i + 1;
        while(j < tam){
            if(vet1[i] * vet1[j] == c)
            printf("%d, %d;", vet1[i], vet1[j]);
        j++;
        ind++;
        }
    }
    if(ind == 0){
        printf("Não há produto interno.");
    }
    
    return 0;
}
