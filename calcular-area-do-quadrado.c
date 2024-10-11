/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    double lq, lr1, lr2, raio;
    printf("q = quadrado\nr = retangulo \nc = circulo\n");
    printf("Digite uma letra para calcular a forma correspondente:");
    scanf("%c", &letra);
    if (letra == 'q'){
        printf("Digite valor do lado: ");
        scanf("%lf", &lq);
        printf("Seu resultado foi: %.2lf", lq*lq );
    } else { if(letra == '1'){ 
        printf("Digite o valor do lador maior e menos, respectivamente:"); 
        scanf("%lf %lf", &lr1, &lr2 );
        printf("Seu resultado foi: %.2lf ", lr1*lr2);
    } else { if(letra == 'c') {
        printf("Digite o valor do raio:"  );
        scanf("%lf", &raio);
        printf("Seu resultado foi: %.2lf", 3.14*raio*raio);
    } else{printf("Opção inválida!!!");}
                            
    }   
   
}
    return 0;
}
