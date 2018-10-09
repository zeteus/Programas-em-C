// exercicios da aula de vetores

#include <stdio.h>
#include <stdlib.h>


int main(){
    int  i;
    float notas_alunos[10], soma, media;

    for(i = 0; i < 10; i++){
        printf("DIGITE A NOTA DO ALUNO: ");
        scanf(" %f", &notas_alunos[i]);
        
        while(notas_alunos[i] < 0){
            printf("DIGITE A NOTA DO ALUNO: (NOTA NEGATIVA NAO E VALIDA)");
            scanf(" %f", &notas_alunos[i]);
        }
        soma += notas_alunos[i];
    }
    
    media = soma / 10;
    printf("AS NOTAS ACIMA DA MEDIA FORAM:\n");

    for(i = 0; i < 10; i++){
        if(notas_alunos[i] > media)
            printf(" %.2f\n", notas_alunos[i]);
    }

    return 0;
}