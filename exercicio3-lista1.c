// categoria dos atletas

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("INFORME A IDADE: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 10)
        printf("CATEGORIA INFANTIL\n");
    
    else if (idade > 10 && idade < 18)
             printf("CATEGORIA JUVENIL\n");

    else if (idade >= 18 && idade <= 30)
             printf("CATEGORIA PROFISSIONAL\n");

    else printf("CATEGORIA SENIOR\n");

    return 0;
}