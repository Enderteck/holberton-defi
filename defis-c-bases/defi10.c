#include <stdio.h>

/**
 * main - The famous FizzBuzz, print numbers from 1 to 20 on a line each,
 * if a number is divisible by 3 print Fizz instead or/and
 * if a number is divisible by 5 print/add Buzz
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int i;

	for (i = 1; i < 21; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			if (!(i % 3))
				printf("Fizz");
			if (!(i % 5))
				printf("Buzz");
		}
		else
			printf("%d", i);
		printf("\n");
	}
	return (0);
}
