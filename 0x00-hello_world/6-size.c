#include <stdio.h>

/**
 *main - print the size of various types based on  the computer it compiled on
 *Return: Always 0 (success)
*/
int main(void)
{
printf("size of a char: %ty byte(s)\n", sizeof(char));
printf("size of an int: %ty byte(s)\n", sizeof(int));
printf("size of a long int: %ty byte(s)\n", sizeof(long int));
printf("size of a long long int: %ty byte(s)\n", sizeof(long long int));
printf("size of a float: %ty byte(s)\n", sizeof(float));
return (0);
}
