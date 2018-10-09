// conta quantas letra há ebtre duas informadas

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_letras_entre = 0;
    char var1,
         var2;
    
    printf("INFORME A PRIMEIRA LETRA: ");
    scanf("%c", &var1);
    
    printf("\nINFORME A SEGUNDA LETRA: ");
    scanf(" %c", &var2);

    int n_var1 = (int)var1,  // transformação das variáveis em
        n_var2 = (int)var2;  // inteiros
    
    if(n_var1 != n_var2)
        n_letras_entre = abs(n_var1- n_var2) - 1;

    printf("\n%d\n", n_letras_entre);

    return 0;
}
