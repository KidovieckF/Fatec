/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(m=1;m<=i;m++){
            printf("%d ", m );
        }
        printf("\n");
        
    }
    for(i=n - 1;i>=1;i--){
        for(m=1;m<=i;m++){
            printf("%d ", m );
        }
      printf("\n");  
    }

    return 0;
}
