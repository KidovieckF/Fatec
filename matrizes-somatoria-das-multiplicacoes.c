/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
# define MAX 10

int main()
{
   int mat1[MAX] [MAX], mat2[MAX] [MAX], res[MAX] [MAX];
   int i, j ,n, k;
   
   printf("Dimensão das matrizes.");
   scanf("%d", &n);
   
   for(i=0; i<n; i++){
       for(j=0; j<n; j++){
           scanf("%d", &mat1[i][j]);
       }
        printf("\n"); 
       
   }
   
   for(i=0; i<n; i++){
       for(j=0; j<n; j++){
           scanf("%d", &mat2[i][j]);
       }
        printf("\n"); 
       
   }
    for(i=0; i<n; i++){
       for(j=0; j<n; j++){
           res[i][j] = 0;
           for(k=0; k<n; k++){
               res[i][j] = res[i][j] + (mat1[i][k] * mat2[k][j]);
               }
       printf("%d   ",res [i][j]);
           
       }
        printf("\n"); 
       
   }
   
    return 0;
}
