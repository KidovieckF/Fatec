/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, vet[10], maior = 0, posicao;
    
    for (i= 0; i < 10; i++){
        scanf("%d",&vet[i]);
    }
    maior = vet[0];
    for (i = 1; i<= 9; i++) {
        if (vet[i] > maior){ 
            maior = vet[i];
            posicao = i + 1;
            
        }
    }
    printf("Maior número %d, na posição %d", maior, posicao);
    return 0;
}

