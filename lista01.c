/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, anos_contri, aprovado = 0;
    char sexo;
    printf("Digite seu sexo com 'M' ou 'F', sua idade e a quantidade de anos de contribuição.");
    scanf("%c %d %d",&sexo, &idade, &anos_contri);
    
    if (sexo == 'M') {
        if ((idade >= 65 && anos_contri >= 10) || ((idade < 65 && idade >= 63) && anos_contri >= 15 ));
        aprovado = 1;
    } else if (sexo == 'F'){
        if ((idade >= 63 && anos_contri >= 10) || ((idade < 63 && idade >= 61) && anos_contri >= 15 ));
        aprovado = 1;
    }

    if(aprovado = 1){
        printf("Aposentável");
    } else printf("Não Aposentável");
    
    return 0;
}
