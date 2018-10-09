// Cidade Felicidade

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota_do_aluno,
        nota_minima,
        nota1,
        nota2,
        nota3,
        nota4;

    printf("INFORME A NOTA 1 DO ALUNO: ");
    scanf("%d", &nota1);

    printf("\nINFORME A NOTA 2 DO ALUNO: ");
    scanf("%d", &nota2);

    printf("\nINFORME A NOTA 3 DO ALUNO: ");
    scanf("%d", &nota3);

    printf("\nINFORME A NOTA 4 DO ALUNO: ");
    scanf("%d", &nota4);

    nota_do_aluno = nota1 + nota2 + nota3 + nota4;

    if ( nota_do_aluno >= 32 )
        printf("\nAPROVADO\n");
        
    else if ( nota_do_aluno >= 20 && nota_do_aluno < 32 ){
        nota_minima = (100 - nota_do_aluno) / 10;
        printf("\nPROVA FINAL, NOTA MINIMA: %d\n", nota_minima);
    } else 
        printf("\nREPROVADO\n");

    return 0;
}