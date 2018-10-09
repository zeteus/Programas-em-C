// calcular o perimetro de um retangulo

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x_ie,
          x_sd,
          y_ie,
          y_sd,
          altura,
          largura,
          perimetro;

    printf("INFORME A ALTURA DO RETANGULO: ");
    scanf("%f", &altura);

    printf("\nINFORME A LARGURA DO RETANGULO: ");
    scanf("%f", &largura);
    
    perimetro = 2 * altura + 2 * largura;

    printf("\n%.2f", perimetro);
    // programa informa a resposta e logo depois pede as coordenadas

    printf("\nINFORME A COORDENADA X DO CANTO INFERIOR ESQUERDO DO RETANGULO: ");
    scanf("%f", &x_ie);

    printf("\nINFORME A COORDENADA Y DO CANTO INFERIOR ESQUERDO DO RETANGULO: ");
    scanf("%f", &y_ie);

    printf("\nINFORME A COORDENADA X DO CANTO SUPERIOR DIREITO DO RETANGULO: ");
    scanf("%f", &x_sd);

    printf("\nINFORME A COORDENADA Y DO CANTO SUPERIOR DIREITO DO RETANGULO: ");
    scanf("%f", &y_sd);

    altura = abs(y_sd - y_ie);
    largura = abs(x_sd - x_ie);
    perimetro = 2 * altura + 2 * largura;

    printf("\n%.2f\n", perimetro);

    return 0;
}