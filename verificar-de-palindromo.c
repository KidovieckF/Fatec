/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[40];
    int tamP;
    int ini, fim;
    int palindromo = 1;
    
    printf("Digite uma frase: ");
    fgets(palavra, 40, stdin);
    
    tamP = strlen(palavra) - 1;
    
    for(ini=0, fim=tamP - 1; fim>0; ini++, fim--){
        while(palavra[ini] == ' '){
            ini++;
        }
        while(palavra[fim] == ' '){
            fim--;
        }
        if(palavra[ini] != palavra[fim]){
            palindromo = 0;
        }
    }

    if(palindromo){
        printf("É um palindromo.");
    } else printf("Não é um palindromo.");

    return 0;
}
