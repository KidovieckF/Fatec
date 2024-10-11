/******************************************************************************

O objetivo do programa é fazer com a criação de uma senha forte seja obtida, alertando caso
os criterios da senha não sejam obtidos.

Italo Vieck 
RA com o final 34

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char senha[50], dicionario[100][100];
    int n, i = 0, erro = 1, caracspec = 0, inddic = 0, palindromo = 1, ini, fim;
    int temMaiuscula = 0, temMinuscula = 0, temNumero = 0;
  
    printf("Digite a quantidade de palavras: ");
    scanf("%d", &n);
    getchar();
  
    printf("Digite seu dicionario:\n");
    for (i = 0; i < n; i++) {
        fgets(dicionario[i], 100, stdin);
        dicionario[i][strcspn(dicionario[i], "\n")] = '\0';
    }
    printf("Crie a sua senha!\n");
    printf("A sua senha deve seguir os seguintes parametros:\n");
    printf("Conter pelo menos 8 caracteres;\n");
    printf("Conter pelo menos uma letra maiúscula;\n");
    printf("Conter pelo menos uma letra minúscula;\n");
    printf("Conter pelo menos um número;\n");
    printf("Conter pelo menos um dos seguintes símbolos: !, ?, #, @, $;\n");
    printf("Não pode ser um palíndromo, i.e., revertendo-se os caracteres não podemos obter a mesma senha;\n");
    printf("Não pode conter nenhuma palavra reservada de um dicionário;\n");
    
    while(erro >= 1){
        
        printf("Digite a senha: ");
        fgets (senha, 50, stdin);
    
        int tamP = strlen (senha) - 1;
        int j;
        for (i = 0; i < n; i++) {
            if (strstr(senha, dicionario[i]) != NULL) {
                inddic = 1;
            }
        } //Para verificar se a palavra esta no dicionario
    	
        
    	
    	if(tamP < 8){
    	    printf("A senha deve conter pelo menos 8 caracteres!\n");
    	    erro++;
    	    
    	}//verificar tamanho
    
    	i = 0;
    	for (i = 0; i < tamP; i++) {
            if (isupper(senha[i])) temMaiuscula = 1;
            if (islower(senha[i])) temMinuscula = 1;
            if (isdigit(senha[i])) temNumero = 1;
            if (senha[i] == '!' || senha[i] == '?' || senha[i] == '#' || senha[i] == '@' || senha[i] == '$') {
                caracspec = 1;
            }
        }//verificar maiúscula, minúscula, numero e caracteres espreciais
        
        
        if (!temMaiuscula) {
            printf("A senha deve conter pelo menos uma letra maiúscula!\n");
            erro++;
        }
    
        if (!temMinuscula) {
            printf("A senha deve conter pelo menos uma letra minúscula!\n");
            erro++;
        }
    
        if (!temNumero) {
            printf("A senha deve conter pelo menos um número!\n");
            erro++;
        }
      
        if (!caracspec) {
            printf("A senha deve conter pelo menos um símbolo!\n");
            erro++;
        }
        
        for(ini=0, fim=tamP - 1; fim>0; ini++, fim--){
           while (senha[ini] == ' '){
                ini++;
            }
           while (senha[fim] == ' '){
                fim--;
            }
            if(senha[ini] != senha[fim]){
                palindromo = 0;
            }//verificar se é palindromo
        }
        if(palindromo){
            printf("A senha é um palindromo!\n");
            erro++;
            }
        
        for (i = 0; i < n; i++) {
            if (strstr(senha, dicionario[i]) != NULL) {
                printf("A senha nao pode conter palavras reservadas!\n");
                erro++;
                
            }
        }
        
        if(inddic){
            printf("A senha nao pode conter palavras reservadas!\n");
            erro++;
        }
        if(erro == 1){
            printf("ok");
            break;
        }
    
    }
  return 0;
}
