#include <stdio.h>

int main()
{
    int n, total = 0;//n=numero, total =0
        printf("Escreva um numero inteiro a sua escolha:\n");
        scanf("%d", &n);

	if (n < 0)
		n *= -1;

	while (n)
	{
		total += n%10;

		n /= 10;
	}

	printf("A soma de todos os seus algarismos e: \n%d", total);

	return (0);
}
