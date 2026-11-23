#include <stdio.h>

void is_palindrome(const char chaine[])
{
	int i, len;
	char *text = "est un palindrome";

	if (!chaine || !chaine[0])
		return;
	len = 0;
	while (chaine[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		if (chaine[i] != chaine[len - i - 1])
			text = "n'est pas un palindrome";
		i++;
	}
	printf("%s %s.\n", chaine, text);
}
