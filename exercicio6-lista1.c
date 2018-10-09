// somatório de N elementos a partir de A

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,
        somatorio = 0,
        A,
        N;

    printf("INFORME OS n ELEMENTOS QUE SE DEVE SOMAR: ");
    scanf("%d", &N);

    while(N <= 0){
        printf("n NAO PODE SER ZERO OU NEGATIVO, INFORME UM NOVO VALOR: ");
        scanf("%d", &N);
    }

    printf("\nINFORME A PARTIR DE QUE NUMERO SE DEVE SOMAR: ");
    scanf("%d", &A);

    for(i = A; i < A + N; i ++){
        somatorio = somatorio + i;
    }
    
    printf("%d\n", somatorio);
    
    return 0;
}
