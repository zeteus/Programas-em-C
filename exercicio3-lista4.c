// fazer um menu de funcoes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S1[21] = {0}, S2[21] = {0}, caracter, funcao, SubS1[];
    int tamanho_letra, n = strlen(S1), i = 0, conta_letra = 0, posicao;

    while(1){
        printf("ESCOLHA UMA DAS SEGUINTES FUNCOES:\n");
        printf("A- LER UMA STRING\n");
        printf("B- IMPRIMIR O TAMANHO DA STRING\n");
        printf("C- COMPARA DUAS STRINGS\n");
        printf("D- JUNTAR DUAS STRINGS\n");
        printf("E- IMPRIMIR A STRING AO CONTRARIO\n");
        printf("F- CONTAR CONTAR A INCIDENCIA DE UM CARACTER\n");
        printf("G- RETORNAR UMA SUBSTRING\n");
        printf("H- SUBSTITUIR UM CARACTER PELO OUTRO DENTRO DE UMA STRING\n");
        printf("0- TERMINA O PROGRAMA\n");
        scanf(" %c", &funcao);

        switch (funcao){
            case 'a':
                    printf("DIGITE PALAVRA DE NO MAXIMO 20 CARACTERES:\n");
                    scanf(" %s", S1);
                break;

            case 'b':
                    tamanho_letra = strlen(S1);
                    printf(" %d", tamanho_letra);
                break;
            
            case 'c':
                    printf("DIFITE PALAVRA A SEGUNDA PALAVRA A SER COMPARADA:\n");
                    scanf(" %s", S2);
                    if (strcmp(S1,S2) < 0)
                        printf("A SEGUNDA PALAVRA É MAIOR");
                    else if (strcmp(S1,S2) > 0)
                        printf("A PRIMEIRA PALAVRA É MAIOR");
                    else
                        printf("AS DUAS PALAVRAS SÃO IGUAIS");
                break;

            case 'd':
                    printf("DIFITE PALAVRA A SEGUNDA PALAVRA A SER CONCATENADA:\n");
                    scanf(" %s", S2);
                    printf("%s%s", S1, S2);
                break;

            case 'e':
                    for (i = 0; i < strlen(S1); i++, n-- ){
                        S_contrario[n] = S1[i];
                    }
                    printf("%s", S_contrario);
                break;

            case 'f':
                    printf("DIGITE UM CARACTER A SER AVALIADO:\n");
                    scanf(" %c", &caracter);
                    for (i = 0; i < strlen(S1); i++){
                        if (S1[i] == caracter)
                            conta_letra++;
                    }
                    printf("A QUANTIDADE QUE O CARACTER SE REPETE EH IGUAL A %d VEZES", conta_letra);
                break;

            case 'g':
                    printf("DIGITE A PARTIR DE QUAL POSICAO DEVE SER FEITA A SUBSTRING:\n");
                    scanf(" %d", &posicao);
                    printf("DIGITE O TAMANHO DA SUBSTRING:\n");
                    scanf(" %d", &tamanho);

                    for (i = posicao; i < posicao + tamanho; i++){
                        SubS1[i] = S1[i];
                    }
                    printf(" %s", SubS1);
                break;

            case 'h':
                    printf("DIGITE UM CARACTER:\n");
                    scanf(" %c", &caracter);
                    printf("\nDIGITE A POSICAO QUE DESEJA COLOCAR O CARACTER:\n")
                    scanf(" %d", &posicao);
                    S1[posicao] = caracter;
                    printf(" %s", S1);
                break;

            case '0':
                return 0;

            default:
                break;
        }
    }

}