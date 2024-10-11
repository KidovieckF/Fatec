/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
double pot(double a, double b){
    double x = 1;
    if(b > 0){
        for(int i=1; i <= b; i++) {
             x = x * a;
        }
    } else if (b < 0) {
            x = 1/a;
            a = 1/a;
            b = b * - 1;
            for(int i=1; i < b; i++) {
                 x = x * a;
        }
    } else x = 1;
    return x;
}


int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.2lf", pot(a,b));

    return 0;
}
