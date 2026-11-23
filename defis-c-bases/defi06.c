#include <stdio.h>

/**
 * main - Prints a triangle of nbr lines & colomns
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int i, j, nbr;

	nbr = 5;
	i = 0;
	while (i < nbr)
	{
		j = nbr;
		while (j - i <= nbr)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
