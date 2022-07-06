#include "main.h"

/**
 * print_alphabet -print the lowercase alphabets
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

