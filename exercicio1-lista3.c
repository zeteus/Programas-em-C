// pesquisa de quilometragem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometragem,
        somatorio_km = 0,
        n_carros = 0,
        i = 0;
    char resposta_leitura_nova = 's';
    
    while ( resposta_leitura_nova == 's' ){
    
        printf("\nINFORME A LEITURA DA QUILOMETRAGEM: \n");
        scanf("%d", &quilometragem);

        while (quilometragem <= 0){
            printf("\nINFORME A LEITURA DA QUILOMETRAGEM QUE SEJA MAIOR QUE 0: \n");
            scanf("%d", &quilometragem);   
            i ++;
        }
        
        somatorio_km += quilometragem;
        n_carros++;

        printf("\nDESEJA REALIZAR NOVA LEITURA (S/N)? \n");
        scanf(" %c", &resposta_leitura_nova);
        while ( resposta_leitura_nova != 's' &&                        resposta_leitura_nova != 'n' ){
            printf("\nDESEJA REALIZAR NOVA LEITURA (S/N)? \n");
            scanf(" %c", &resposta_leitura_nova);
        }
    }

    printf("\nNUMERO DE CARROS: %d\n", n_carros);
    printf("\nQUILOMETRAGEM TOTAL: %d\n", somatorio_km);
    printf("\nDADOS INVALIDOS: %d\n", i);

}