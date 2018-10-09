// uma funcao que some os numeros de um vetor inteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma_numeros( int lista_de_numeros[] )
{
    int i = 0,
        soma = 0;
    
    while ( i < 10 ){
        soma += lista_de_numeros[i];
        i++;
    }
    return soma;
}

int main()
{
    int lista_de_numeros[10], i = 0;

    printf("DIGITE 10 NUMEROS: ");
    while ( i < 10){
        scanf(" %d", &lista_de_numeros[i]);
        i++;
    }
    printf("%d\n", soma_numeros( lista_de_numeros ));

    return 0;
}