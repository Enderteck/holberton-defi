#include <stdio.h>

/**
 * main - Prints the even numbers from 0 to 100 on a line,
 * separated by a space
 *
 * Return: 0 when program is done
 */
int main(void)
{
	char *sep;
	int i;

	sep = "";
	i = 0;
	while (i <= 100)
	{
		printf("%s", sep);
		printf("%d", i);
		sep = " ";
		i += 2;
	}
	printf("\n");
	return (0);
}
