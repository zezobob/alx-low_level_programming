#include <stdio.h>

/**
*main - Entry point A prints the alphabet in lowercase
*Return: Always 0 (Success)
*/
int mai(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
