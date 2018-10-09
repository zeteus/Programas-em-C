// Definir o valor pago pelo cliente
// de acordo com o combustível consumido

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int litros, tipo;
    float valor;

    printf("LITROS CONSUMIDOS: ");
    scanf("%d", &litros);

    printf("\nTIPO DE COMBUSTÍVEL: ");        // se o combustível for gasolina digite 2 e se for álcool digite 1
    scanf("%d", &tipo);

    if (tipo == 1){
        valor = 2.83 * litros;
        printf("%f\n", valor);
    }

    if (tipo == 2){
        valor = 3.15 * litros;
        printf("%f\n", valor);
    }
    
    return 0;
}