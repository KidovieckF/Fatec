/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    
    int a, b, i, acu = 1;
    scanf("%d %d", &a, &b);
    for (i = 0; i < b; i++){
        acu = acu * a;
         
        }
    printf("%d", acu);


return 0;
}
