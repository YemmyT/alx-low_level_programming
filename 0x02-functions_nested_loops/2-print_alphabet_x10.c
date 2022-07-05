#include "main.h"

/**
 *print_alpahbet - print the lowercase alphabet
 */
void print_alphabet(void)
{
	int j;
	int x;
	for (x = 0; x < 10; x++)
	{
	for (j = 'a'; j <= 'z' ; j++)
{
	_putchar(j);
}
	_putchar('\n');
	}
}
