#include <stdio.h>

/**
 * main - Prints an array, its sum & its average
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int size, i, sum, array[] = {4, 7, 2, 9, 3};
	float avr;

	sum = 0;
	size = sizeof(array) / 4;

	printf("Valeurs :");
	i = 0;
	while (i < size)
	{
		printf(" %d", array[i]);
		sum += array[i];
		i++;
	}
	printf("\n");
	avr = sum / size;
	printf("Somme : %d\nMoyenne : %.2f\n", sum, avr);
	return (0);
}
