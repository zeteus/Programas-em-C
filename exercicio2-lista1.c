// calcular o plano de saúde do paciente

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int idade;
    float valor_mensalidade;
    char temDoenca;

    printf("INFORME A IDADE: ");
    scanf("%d", &idade);

    printf("TEM DOENCA CRONICA? s/n ");
    scanf(" %c", &temDoenca);

    if ( idade >= 0 && idade <= 18 ){
        valor_mensalidade = 83.15;
    }

    else if ( idade > 18 && idade <= 33 ){
        if ( temDoenca == 's'){
            valor_mensalidade = 133.88 * 1.05;
        } else {
            valor_mensalidade = 133.88;
        }
    }

    else if ( idade > 33 && idade <= 44 ){
        if ( temDoenca == 's'){
            valor_mensalidade = 203.73 * 1.1;
        } else {
            valor_mensalidade = 203.73;
        }
    }

    else if ( idade > 44 && idade <= 58 ){
        if ( temDoenca == 's'){
            valor_mensalidade = 312.44 * 1.15;
        } else {
            valor_mensalidade = 312.44;
        }
    }
    
    else {
        if ( temDoenca == 's'){
            valor_mensalidade = 498.53 * 1.30;
        } else {
            valor_mensalidade = 498.53;
        }
    }

    printf ("VALOR DA MENSALIDADE: %.2f ", valor_mensalidade);

    return 0;
}