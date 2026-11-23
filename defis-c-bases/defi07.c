#include <stdio.h>

/**
 * print_rectangle - Prints a rectangle with given width & height
 * @width: Rectangle width
 * @height: Rectangle height
 *
 * Return: 0 when program is done
 */
void print_rectangle(const int width, const int height)
{
	int i, j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}

/**
 * main - Prints a rectangle then a Square using print_rectangle()
 *
 * Return: 0 when program is done
 */
int main(void)
{
	printf("Rectangle :\n");
	print_rectangle(8, 3);
	printf("Carré :\n");
	print_rectangle(4, 4);
	return (0);
}
