/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int vet[50], i = 0, num; 
    double acu;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &num);
    printf("\nDigite os numeros: ");
    while(i < num){
        scanf("%d", &vet[i]);
        i++;
    }
    
    i = 0;
    while(i <= num){
        acu = acu + vet[i];
       i++;
    }
    
    printf("A média foi de: %.2lf", acu/num);
    return 0;
}
