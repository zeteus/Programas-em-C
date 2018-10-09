// jogo de futebol FLA vs VAS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int golFla = 0,
        golVas = 0,
        novoJogo = 1;

    while(novoJogo == 1){
        printf("GOLS DO FLA: ");
        scanf("%d", &golFla);

        printf("\nGOLS DO VAS: ");
        scanf("%d", &golVas);

        if(golFla == golVas){
            printf("\nDRAW");
        } else if (golFla > golVas){
            printf("\nFLAMENGO WINNER");
        } else if (golFla < golVas){
            printf("\nVASCO WINNER");
        }

        printf("\nNEW GAME? (1-YES / 2-NO) ");
        scanf("%d", &novoJogo);
    }

    return 0;
}