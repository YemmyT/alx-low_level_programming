#include "main.h"
/**
*_memcpy -  function that copies memory area to memory
*Return: a pointer to memory
*/

char *_memcpy( char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];
	return (dest);
}
