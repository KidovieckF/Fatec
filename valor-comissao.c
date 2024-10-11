/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double transacao;
    double valor_calculado;
    printf("Para calcular o valor da comissão, digite o valor da transação: ");
    scanf("%lf", &transacao);
    
    if(transacao <= 2500.00) {
    valor_calculado = 30.00 + 1.7/100 * transacao;
    
        if(valor_calculado < 39.00 ) {
            printf("O valor da sua comissão é de: 39,00 ");
        } else if (valor_calculado > 39.00) {
            printf("O valor da sua comissão é de: %.2lf", valor_calculado);
        }
    } else
    
    if(transacao <= 6250.00) {
    valor_calculado = 56.00 + 0.66/100 * transacao; 
        printf("O valor da sua comissão é de: %.2lf", valor_calculado);
    } else
    
    if(transacao <= 20000.00) {
    valor_calculado  = 76.00 + 0.34/100 * transacao;
        printf("O valor da sua comissão é de: %.2lf", valor_calculado);
    } else 
    
    if(transacao <= 50000.00) {
        valor_calculado  = 100 + 0.22/100 * transacao;
        printf("O valor da sua comissão é de: %.2lf", valor_calculado);
    } else 
    
    if(transacao <= 500000.00) {
    valor_calculado = 155.00 + 0.11/100 * transacao; 
        printf("O valor da sua comissão é de: %.2lf", valor_calculado);
    } else 
    
    if(transacao > 500000.00 ) {
    valor_calculado = 255.00 + 0.09/100 * transacao; 
        printf("O valor da sua comissão é de: %.2lf", valor_calculado);
    }
    

    return 0;
}
