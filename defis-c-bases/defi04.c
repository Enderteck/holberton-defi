#include <stdio.h>

/**
 * main - Gives feedback on a mark, between 0 & 20
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int note;

	note = 14;
	printf("Note : %d\n", note);
	printf("Appréciation : ");
	if (note < 0 || note > 20)
		printf("Note invalide\n");
	else if (note < 10)
		printf("À retravailler\n");
	else if (note < 12)
		printf("Passable\n");
	else if (note < 14)
		printf("Assez bien\n");
	else if (note < 16)
		printf("Bien\n");
	else
		printf("Très bien\n");
	return (0);
}
