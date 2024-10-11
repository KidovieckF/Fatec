#include <stdio.h>
#include <stdlib.h>


int somaVet(double * vet1, double * vet2, int n)
{
    int x = 0;
    printf("\nSoma dos vetores: ");
    for(int i = 0; i < n; i++){
        x += vet1[i] + vet2[i];
    }
    
    return x;
}

int main()
{
    double * vet1, *vet2;
    int i, n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    vet1 = malloc(n*sizeof(double));
    vet2 = malloc(n*sizeof(double));
    
    printf("\nDigite o primeiro vetor: ");
    
    for(i = 0; i < n; i++)    {
        scanf("%lf", &vet1[i]);
    }
    
    printf("\nDigite o segundo vetor: ");
    
    for(i = 0; i < n; i++){
        scanf("%lf", &vet2[i]);
    }
    
    printf("%d", somaVet(vet1, vet2, n));


    free(vet1);
    free(vet2 );
    return 0;
}