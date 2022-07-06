#include "main.h"

/**
* main - print sign of numbers
* Return: 1 and print + if n is greater than zero
* 0 print 0 if n is zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
