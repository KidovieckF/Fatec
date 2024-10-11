/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double potencia(double a, int b){
    double c = a;
    
    for(a = 2; a <= 10; a++){
        c = a;
        printf("\n");
        for(int b = 1; b <= 10; b++){
            printf("%.lf, ", c);
            c = c * a;
   
        }
    
    }
    return c;
}



int main()
{
    double a = 2;
    int b =1; 
    int f;
    
    f = potencia(a,b);
    printf("%d",f);

    return 0;
}