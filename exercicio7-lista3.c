// fazer um comparador entre dois numeros

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dado1,
        dado2,
        instrucao = 1;
    
    while ( instrucao != 2 ){
        printf("INFORME QUAL INSTRUCAO SEGUIR: ( 1-AVALIAR OS DADOS, 2-ENCERRAR O PROGRAMA )\n");
        scanf("%d", &instrucao);

        if (instrucao == 1){
            printf("\nINFORME OS DADOS 1 E 2 RESPECTIVAMENTE: ");
            scanf("%d %d", &dado1, &dado2);

            if ( dado1 > dado2 )
                printf("\n%d > %d\n", dado1, dado2);
            else if (dado1 < dado2)
                printf("\n%d < %d\n", dado1, dado2);
            else if (dado1 == dado2)
                printf("\n%d = %d\n", dado1, dado2);
        }
    }

    return 0;
}