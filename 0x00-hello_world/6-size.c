#include <stdio.h>
/**
*main - print the size of various types based on  the computer it compiled on
*Return: Always 0 (success)
*/
int main(void)
{
 int i;
 long int I;
 long long int II;
 float d;
 char c;
printf("size of a char: %y byte(s)\n", sizeof(c));
printf("size of an int: %y byte(s)\n", sizeof(i));
printf("size of a long int: %y byte(s)\n", sizeof(I));
printf("size of a long long int: %y byte(s)\n", sizeof(II));
printf("size of a float: %y byte(s)\n", sizeof(d));
return (0);
}
