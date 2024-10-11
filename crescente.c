/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n, i, numatual, numanterior = 0 ;
    int ind = 1;
    printf("Escolha a quantidade de números: ");
    scanf( "%d" ,&n);
    printf("\nDigite estritamente na ordem crescente.\n");
    for(i = 0; i < n; i++){
        scanf("%d", &numatual);
        if(numanterior > numatual) {
            ind = 0;
            break;
        }
        numanterior = numatual;
    }
        if (ind == 1){
            printf("tudo certo.");
        }   else printf("Ordem errada.");
    return 0;
}
