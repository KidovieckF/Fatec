/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double media(double vet[], int n, int *i);

int main(){
    double vet[] = {20,33,6,86,1,7,10};
    int n = 7;
    int i;

    double mediaMain = media(vet, n, &i);
    printf("%.2lf %d", mediaMain, i); 

    return 0;
}

double media(double vet[], int n, int *i){
    int j;
    double mediafunc, acu = 0;
    double verificador, valorAtual, aux2;
    for(j = 0; j < n; j++){
        acu = acu + vet[j];
    }
    mediafunc = acu/n;
    
    aux2 = vet[0] - mediafunc;
    if(aux2 < 0){
            aux2 = aux2 * (-1); 
    }
    valorAtual = vet[0];
    for(j = 0; j < n; j++){
        verificador = vet[j] - mediafunc;
        if(verificador < 0){
            verificador = verificador * (-1); 
        }
        if(verificador < aux2){
            aux2 = verificador;
            valorAtual = vet[j];
        }
    }
    *i = valorAtual;
    
    return mediafunc;
}




