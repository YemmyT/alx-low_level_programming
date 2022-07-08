#include <stdio.h>


/**
* main - prints prime factors of 1231952 are 2, 2, 2, 2, 37 and 208 prime numbers
* Return: Always 0
*/

int main(void)
{
	long iny x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}

