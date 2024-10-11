/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct Produto{
        char nome[80];
        double preco;
        int quantidade;
    }Produto;
    

void ordenaPreco(Produto vet[], int n);
void ordenaQuant(Produto vet[], int n);

int main()
{
    int n = 3;
    Produto vet[n];
    Produto produtos;
    
    for(int i = 0; i < n; i++){
        if(i > 0){
            printf("\n");
        }
        printf("Digite o nome do produto %d: ", i+1);
        fgets(produtos.nome, 80, stdin);
        size_t len = strlen(produtos.nome);
        if (len > 0 && produtos.nome[len - 1] == '\n') {
            produtos.nome[len - 1] = '\0';
        }
        printf("Digite o preço: ");
        if (scanf("%lf", &produtos.preco) != 1) {
            printf("Erro ao ler o preço.\n");
            return 1;
        }
        limparBuffer(); 
        printf("Digite sua quantidade: ");
        scanf("%d", &produtos.quantidade);
        limparBuffer();
        vet[i] = produtos;
        
    }
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome: %s\n", vet[i].nome);
        printf("Preço: %.2lf\n", vet[i].preco);
        printf("Quantidade: %d\n", vet[i].quantidade);
    }
    
    ordenaPreco(vet, n);
    ordenaQuant(vet, n);
    
    return 0;
}

void ordenaPreco(Produto vet[], int n){
    Produto aux;
    int min;
    printf("Vetor de preços ordenados: ");
    for(int i = 0; i < n ; i++){
        
        min = i;
        for(int j = i + 1; j < n; j++){
           if(vet[min].preco > vet[j].preco ){
               min = j;
            }
        }
        aux.preco = vet[i].preco;
        vet[i].preco = vet[min].preco;
        vet[min].preco = aux.preco;
        printf("R$%.2lf ", vet[i].preco);
        
    }
    
}

void ordenaQuant(Produto vet[], int n){
    Produto aux;
    int min;
    printf("\nVetor de Quantidade ordenadas: ");
    for(int i = 0; i < n ; i++){
        
        min = i;
        for(int j = i + 1; j < n; j++){
           if(vet[min].quantidade > vet[j].quantidade ){
               min = j;
            }
        }
        aux.quantidade = vet[i].quantidade;
        vet[i].quantidade = vet[min].quantidade;
        vet[min].quantidade = aux.quantidade;
        printf("%d ", vet[i].quantidade);
        
    }
}









