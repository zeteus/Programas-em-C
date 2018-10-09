// imprimir os impares do intervalo de 10 a 100

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    while (i <= 100)
    {
        if (i%2 != 0)
            printf ("%d\n", i);
        i = i + 1;
    }
    return 0;
}
