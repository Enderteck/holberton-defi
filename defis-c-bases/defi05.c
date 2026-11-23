#include <stdio.h>

/**
 * main - Desc
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int count, array[] = {3, 8, 1, 6, 4, 9};

	count = sizeof(array) / 4;
	printf("Le tableau contient %d éléments.\n", count);
	return (0);
}
