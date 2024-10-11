/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

   
   void frequencias(int v[], int n, int *f1, int *f2);

int main()
{
    int v[50];
    int n;
    int menor, maior;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int i;
    
    printf("\nDigite o vetor: ");
    for(i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    
    frequencias(v,n,&menor,&maior);
    
    printf("Menor: %d , Maior: %d", menor, maior);

    return 0;
}

   void frequencias(int v[], int n, int *f1, int *f2){

       int maiorfrequencia = 0;
       int menorfrequencia = n;
     
       for (int i = 0; i < n; i++){
           int contafreq = 0;
           for(int j = 0; j < n ; j++){
               if(v[i] == v[j]){
                   contafreq++;
               }
               
           }
        if(contafreq > maiorfrequencia){
            maiorfrequencia = contafreq;
            *f2 = v[i];
        }
        if(contafreq < menorfrequencia){
            menorfrequencia = contafreq;
            *f1 = v[i];
        }   
           
       }
   }