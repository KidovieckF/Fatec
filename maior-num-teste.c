/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 0, aux = 0, num = 0;
    
    
    

    printf("Digite a sequência de números.\n");
    while (i < 5){
        
        scanf("%d", &num);
        if(num > aux){
            aux = num;
        }
        i++;
    }

    
    
     printf ("O maior número é: %d", aux);
 
        
        return 0;
        
        
    }    
    
