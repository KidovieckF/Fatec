/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int soma(int a, int b){
        int c;
        c = a + b;
        return c;
    }

int main()
{
    int s;
    
    s = soma(10, 15);
    printf("Soma = %d", s);
    
    
}
