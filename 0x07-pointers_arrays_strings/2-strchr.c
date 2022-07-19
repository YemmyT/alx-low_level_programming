#include "main.h"

#include <stdio.h>

/**
* _strchr - locates a character in a string.
* Return: a pointer to the first occurrence of the character c in the string s,
*/

char *_strchr(char *s, char c)
{
	char *flag = NULL;

	if (s != NULL)
	{
		do {
		if (*s == c)
		{
		flag = s;
		break;
		}
		}while (*s++);
	}
	return (flag);
}
