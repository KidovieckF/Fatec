# Fatec
lições fatec

/* If else */

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d" ,&num);
   
    if( (num % 2) == 0 && num > 10 || (num % 2) != 0 && num < 50 ) {
        printf("SIM!"); 
        
    } else {
        printf("NÃO!");
    }
    
    

    return 0;
}
