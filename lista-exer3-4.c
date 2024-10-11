/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main () {

    int vet1[50], vet2[50], nvt1, nvt2, i=0, j, valor = 0;
    printf("Digite a quantidade de numeros da primeira sequência, tem de ser menor ou igual a segunda sequencia: ");
    scanf("%d", &nvt1);
    printf("Digite o valor da 1° sequência: ");
    while (i < nvt1){
    scanf("%d", &vet1[i]);
    i++;
    }
    printf("Digite a quantidade de numeros da segunda sequência: ");
    scanf("%d", &nvt2);
    while(nvt1 > nvt2){
        printf("Entrada inválida, a 2° sequência deve ser maior que a 1°.\nRedigite o valor da 2° sequência: ");
        scanf("%d", &nvt2);
    }
    printf("Digite o valor da 2° sequência: ");
    i = 0;
    while (i < nvt2){
    scanf("%d", &vet2[i]);
    i++;
    }
  
    for(i = 0; i <= nvt2 - nvt1; i++){
        j=0;
        while(j< nvt1 && vet1[j] == vet2[i+j]){
           j++; 
        }
        if(j == nvt1) valor++;
        }
    
    printf("A primeira sequência aparece %d vezes.", valor);
    
    
  return 0;
}
