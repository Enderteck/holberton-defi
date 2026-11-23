#include <stdio.h>

/**
 * main - Prints a string & it's number of vowels
 *
 * Return: 0 when program is done
 */
int main(void)
{
	char *string;
	int i, count;

	string = "Bonjour les amis";
	count = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == 'a' || string[i] == 'A'
		|| string[i] == 'e' || string[i] == 'E'
		|| string[i] == 'i' || string[i] == 'I'
		|| string[i] == 'o' || string[i] == 'O'
		|| string[i] == 'u' || string[i] == 'U'
		|| string[i] == 'y' || string[i] == 'Y')
			count++;
		i++;
	}
	printf("La chaîne \"%s\" contient %d voyelles.\n", string, count);
	return (0);
}
