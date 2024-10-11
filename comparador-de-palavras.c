#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char texto[100], buscaPalavra[100], *valor;
    int contador = 0, i, palavras, indicador;
    printf("Digite a o texto: ");
    fgets(texto, 100, stdin);
    
    while(texto[contador] != '\0' && contador < 100) {
        if (texto[contador] == ' '){
            palavras++;
        }
        contador++;
    }
    
    printf("Total de palavras: %d", palavras + 1);
    printf("\nDigite a palavra que deseja buscar: ");
    fgets(buscaPalavra, 100, stdin);
    valor = strstr(texto, buscaPalavra);
    if(valor){
        printf("Existe essa palavra no texto");
    } else printf("A palavra nao exite");
    
    return 0;
}
