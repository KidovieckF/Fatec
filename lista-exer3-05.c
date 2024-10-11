/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet1[50], vet2[50], vet3[50], tam1, tam2, tam3, i = 0, maior, menor, j;
    printf("Digite o tamanho da 1° sequência: ");
    scanf("%d", &tam1);
    printf("\nAgora os valores: ");
    while(i < tam1){
        scanf("%d", &vet1[i]);
        i++;
    }
    printf("Digite o tamanho da 2° sequência: ");
    scanf("%d", &tam2);
    printf("\nAgora os valores: ");
    i = 0;
    while(i < tam2){
        scanf("%d", &vet2[i]);
        i++;
    }
    
    
    for(i = 0; i <= tam1; i++){
        for(j = 0; j < tam2; j++){
            if(vet1[i] == vet2[j]){
                vet3[i] = vet2[j];
                tam3++;
               
            }
            
        }
    }
    
    for(i = 0; i < tam3; i++){
        printf("%d", vet3[i]);
    }

    return 0;
}
