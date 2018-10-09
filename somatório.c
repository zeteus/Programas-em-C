// Somar todos os naturais, a partir de 0 até n, onde n é dado

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int soma = 0, n = 0, i;

	printf("Digite o n do somatorio: ");
	scanf("%d", &n);

	for(i = 0; i <= n; i ++)
		soma += i;

	printf("%d\n", soma);

	return 0;
}
