#include <stdio.h>
#include <string.h>

void concat(char *s1, char *s2, char *sres)
{
    int pos = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i < len1; i++) {
        sres[pos] = s1[i];
        pos++;
    }

    for (int i = 0; i < len2; i++) {
        sres[pos] = s2[i];
        pos++;
    }


    sres[pos] = '\0';
}

int main()
{

      char s1[4], s2[4], sres[9];
    
    printf("1º vetor\n");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';  // Remove o caractere de nova linha

    printf("2º vetor\n");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';  // Remove o caractere de nova linha
    
    printf("\nresultado:\n");
    concat(s1, s2, sres);
   
    // Imprime o resultado
    printf("%s\n", sres);
    
 
    return 0;
}