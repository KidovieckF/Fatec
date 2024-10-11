/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char st[80], stInv[80];
    int tam, i, j;
    
    printf("Entre com a string (max 79): ");
    scanf("%s", st);
    
    tam = 0;
    while(st[tam] != '\0' && tam < 80) {
        tam++;
    }
    stInv[tam] = '\0';
    j = tam - 1;
    i = 0;
    while (i <tam){
        stInv[j] = st[i];
        i++;
        j--;
    }
    
    printf("A inversa é: %s\n", stInv);
    return 0;
}
