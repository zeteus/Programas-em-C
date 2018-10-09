// verificar propriedade
// abcd
// (ab) + (cd) = (ef)
// (ef)2 = abcd

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metade1,
          metade2;
    int soma,
        numero = 1000;

    while ( numero < 9999 ){
        
        metade1 = numero / 100;
        metade2 = numero % 100;
        
        soma = metade1 + metade2;
        
        if (soma * soma == numero)
            printf("%d, ", numero);
        numero++;
    }

    return 0;
}