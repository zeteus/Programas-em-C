// ler um numero de pares de valores
// cada par representa a idade e a nota de um aluno

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade_aluno = 0,
        idade_maior_nota = 0,
        idade_velho = 0,
        maior_nota = 0,
        nota_velho,
        nota_aluno;
    
    printf("-> INSTRUCOES: PARA ENCERRAR O PROGRAMA BASTA INFORMAR UMA IDADE NEGATIVA <-");

    while ( idade_aluno >= 0 ){
        printf("\nINFORME A IDADE E A NOTA DO ALUNO RESPECTIVAMENTE: ");
        scanf("%d %d", &idade_aluno, &nota_aluno);
        
        if ( maior_nota < nota_aluno ){
            idade_maior_nota = idade_aluno;
            maior_nota = nota_aluno;
        }
        
        if ( idade_velho < idade_aluno ){
            nota_velho = nota_aluno;
            idade_velho = idade_aluno;
        }
    }

    printf("O ALUNO QUE TIROU A MAIOR NOTA TEM %d ANOS ", idade_maior_nota);
    printf("\nA NOTA DO ALUNO MAIS VELHO FOI %d\n", nota_velho);

    return 0;
}