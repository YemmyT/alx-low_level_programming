#include "main.h"

/**
* function - that print digit from 0 to 9 end with a new line
* Return: 0
*/
void print_most_numbers(void)
{
	char n = 0;


	while (n <= 9)

	{

	if (n != 2 && n != 4)

	{

	_putchar('0' + n);

	}

	n++;

	}

	_putchar('\n');

}