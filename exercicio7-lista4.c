// vetor de 10 posicoes que aloca numeros diferentes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i, n;

    printf("DIGITE 10 NUMEROS DIFERENTES: ");

    for (i = 0; i < 10; i++){
        scanf(" %d", &vet[i]);
    }
    
    for (n = 0; n < 10; n++){

        for (i = 0; i < 10; i++){
            if ( vet[n] == vet[i] && n != i ){
                printf("\nDIGITE O NUMERO NOVEMENTE QUE SEJA DIFERENTE DE: %d\n", vet[i]);
                scanf(" %d", &vet[i]);
            }
        }
    }

    for (i = 0; i < 10; i++){
        printf("%d", vet[i]);
    }

    return 0;
}