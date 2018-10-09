// converter um numero N em binario

#include <stdio.h>

int main()
{
    int numero[50],i = 0, n;

    printf("DIGITE UM NUMERO: ");
    scanf(" %d", &n);
    
    while ( n != 0 ){
        numero[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for ( n = 0; n < i; n++){
        printf(" %d\n", numero[n]);
    }
    printf("A QUANTIDADE DE DIGITOS EH: %d", n);

    return 0;
}