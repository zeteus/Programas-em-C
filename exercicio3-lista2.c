// exercicio 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    while ( numero != -1 ){
        printf("INFORME O NUMERO: ");
        scanf("%d", &numero);

        if((numero%2 == 0) && (numero%3 == 0) && (numero%5 == 0) && (numero%7 == 0))
            printf("0");
        else if ( ( numero%2 == 0 ) || ( numero%3 == 0 ) )
                printf("1");
        else if ( ( numero%5 == 0 ) && ( numero%7 == 0 ) )
                printf("2");   
    }

    return 0;
}
