// imprimir uam string sem suas vogais

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S1[50], S2[50];
    int i, n = 0;

    printf("DIGITE UMA PALAVRA: ");
    scanf(" %s", S1);

    for ( i = 0; i < strlen(S1); i ++ )
    {
        if ( S1[i] != 'a' && S1[i] != 'e' && S1[i] != 'i' && S1[i] != 'o' && S1[i] != 'u'){
            S2[n] = S1[i];
            n++;
        }
    }
    
    printf("%s\n", S2);

    return 0;
}