/******************************************************************************
Nome: Italo giandomenico Vieck RA:34
Objetivo: Dado a quantidade de Anos e seus valores de PIB correspondente, o progama 
calculara a porcentagem de crescimento dos anos conseguintes e apos 3 anos ele fara o 
calculo do da média do triênio a cada ano que se passar, assim na saida dando qual triênio teve
a maior média.

*******************************************************************************/

#include <stdio.h>

int main ()
{
    int i, n, ind_ano_um = 0, ind_ano_dois = 2;
    float ano_atual, ano_anterior, porcentagem_um = 0,
    porcentagem_dois, porcentagem_tres, media_trenia, media_trenia_um,
    ano_um, ano_dois, ano_tres, aux, porcentagem_somada = 0;
    printf ("Digite a quantidade de anos, a quantidade tem que ser de pelo menos 3: ");
    scanf ("%d", &n);
    if (n < 3)
	    {
	     while (n < 3)
		    {
		    printf ("Valor inválido, digite novamente: ");
		    scanf ("%d", &n);

		    }
	    }
    printf ("Digite o PIB do ano 0 :");
    scanf ("%f", &ano_um);
    porcentagem_um = 0;			//ano inical valor de crescimento = 0
    printf ("\nDigite o PIB do ano 1 :");
    scanf ("%f", &ano_dois);
    porcentagem_dois = (100 * ano_dois / ano_um) - 100;
    printf ("\nDigite o PIB do ano 2 :");
    scanf ("%f", &ano_tres);
    porcentagem_tres = (100 * ano_tres / ano_dois) - 100;
    media_trenia = (porcentagem_um + porcentagem_dois + porcentagem_tres) / 3;
    ano_anterior = ano_tres;
    if (n > 3)
	    {
	    for (i = 4; i <= n; i++)
		    {
		    printf ("\nDigite o PIB do ano %d :", i - 1);
		    scanf ("%f", &ano_atual);
		    porcentagem_um = porcentagem_dois;
		    porcentagem_dois = porcentagem_tres;
		    porcentagem_tres = (100 * ano_atual / ano_anterior) - 100;
		    ano_anterior = ano_atual;
		    media_trenia_um = (porcentagem_um + porcentagem_dois + porcentagem_tres) / 3;
		    if (media_trenia > media_trenia_um)
			    {
			    media_trenia = media_trenia;
			    }
		    else if (media_trenia < media_trenia_um)
			    {
			  media_trenia = media_trenia_um;
			  ind_ano_um++;
			  ind_ano_dois++;

			}
		}
	}
  printf ("\nA maior média de crescimento foi entre os anos %d ao %d: %.2f", ind_ano_um, ind_ano_dois, media_trenia);









  return 0;
}

