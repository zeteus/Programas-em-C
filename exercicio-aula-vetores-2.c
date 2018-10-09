// COLOTAR 20 NUMEROS INTEIROS E EXIBIR ELES NA ORDEM INVERSA EM QUE FORAM DIGITADOS

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero_invertido[20], i;

    printf("DIGITE NÚMEROS INTEIROS: ");
    
    for(i = 0; i < 20; i++){
        scanf(" %d", &numero_invertido[i]);
    }
    for(i = 19; i >= 0; i--){
        printf(" %d\n", numero_invertido[i]);
    }

    return 0;
}