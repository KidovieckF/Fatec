
#include <stdio.h>

int main()
{
    int i, n, acu = 0;
    scanf("%d", &n);
    for(i=2; i<= n; i++){
        if(n % i != 0) 
            continue;
        printf("\n%d", i);
        
    }
    
        
    
    

    return 0;
}
