// ler um conjunto de dados e fazer as avaliacoes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,
          maior_altura = 0,
          menor_altura = 0,
          soma_alt_f = 0,
          soma_alt_m = 0,
          quant_m = 0,
          quant_f = 0,
          media_altura_f,
          media_altura_m;

    int codigo_genero,
        i;

    for( i = 0, i < 10, i++ ){
        printf("INFORME A ALTURA E O CODIGO DE GENERO (1-MASC / 2-FEM): ");
        scanf("%f %d", &altura, &codigo_genero);
        while ( codigo_genero != 1 && codigo_genero != 0 ){
            printf("INFORME A ALTURA E O CODIGO DE GENERO (1-MASC / 2-FEM): ");
            scanf("%f %d", &altura, &codigo_genero);
        }
        if( codigo_genero == 1 ){
            quant_m++;
            soma_alt_m = soma_alt_m + altura;
        } else {
            quant_f++;
            soma_alt_f = soma_alt_f + altura;
        }

        if( altura > maior_altura )
            maior_altura = altura;
        else if( altura < menor_altura)
            menor_altura = altura;
    }

    media_altura_m = soma_alt_m / quant_m;
    media_altura_f = soma_alt_f / quant_f;

    printf("\nMAIOR ALTURA DA TURMA: %.2f", maior_altura);
    
    printf("\nMENOR ALTURA DA TURMA: %.2f", menor_altura);

    printf("\nMEDIA DAS ALTURAS DAS MULHERES: %.2f", media_altura_f);

    printf("\nMEDIA DAS ALTURAS DOS HOMENS: %.2f", &media_altura_m);

    return 0;
}