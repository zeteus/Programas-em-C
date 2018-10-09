// exercicio 4 sobre string da aula

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verifica_vogal(char c)
{
    switch (letra)
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
}

int main()
{
    char palavra[], caracter;
    int i, vogais = 0;

    printf("DIGITE UMA PALAVRA: ");
    scanf(" %s", palavra);
    
    for ( i = 0; i < strlen(palavra); i++ ){
        if ( verifica_vogal( palavra[i] ))
            vogais++;
    }

    printf("A PALAVRA CONTEM %d", vogais);

    printf("DIGITE UM CARACTER: ");
    scanf(" %c", &caracter);

    for ( i = 0; i < strlen(palavra); i++ ){
        if ( verifica_vogal( palavra[i] ))
            palavra[i] = caracter;
    }
    return 0;
}