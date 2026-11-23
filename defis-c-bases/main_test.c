#include <stdio.h>

void is_palindrome(const char chaine[]);

int main(void)
{
	is_palindrome("radar");
	is_palindrome("bonjour");
	is_palindrome("kayak");
	is_palindrome("");
	is_palindrome(NULL);
	is_palindrome("elle");
	return (0);
}
