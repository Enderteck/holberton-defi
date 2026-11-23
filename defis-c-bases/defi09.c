#include <stdio.h>

/**
 * main - Prints the number of ints in an array
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int i, j, sum, valeurs[2][3] = {{1, 2, 3}, {4, 5, 6}};
	char *sep;

	sum = 0;
	i = 0;
	while (i < 2)
	{
		sep = "";
		j = 0;
		while (j < 3)
		{
			printf("%s%d", sep, valeurs[i][j]);
			sum += valeurs[i][j];
			sep = " ";
			j++;
		}
		printf("\n");
		i++;
	}
	printf("Somme : %d\n", sum);
	return (0);
}
