/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(m = 1; m<= n; m++){
            if(m == i){
                printf("+");
            } else printf("*");
        }
        printf("\n");
    }

    return 0;
}
