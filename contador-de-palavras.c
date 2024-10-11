
#include<stdio.h>
#include<string.h>


int main()
{
    char texto[100], buscaPalavra[100];
    int contador = 0, i = 0, j = 0, palavras, igual, confirmador;
    printf("Digite a o texto: ");
    fgets(texto, 100, stdin);
    int tamT = strlen(texto) - 1;
    
    while(texto[i] != '\0' && contador < 100 && texto[i] !='\n') {
        while(texto[i] == ' '){
            i++;
        }
    
        if(texto[i] != '\n' && texto[i] != '\0'){
            contador++;
            while(texto[i] != ' ' && texto[i] != '\n' && texto[i] != '\0'){
                i++;
            }
        }
        
    }
    
    printf("Total de palavras: %d\n", contador);
    
    
    
    return 0;
    
}

