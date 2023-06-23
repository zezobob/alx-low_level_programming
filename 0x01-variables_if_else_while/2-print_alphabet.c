#include <stdio.h>

/**
*main - Entry point A prints the alphabet in lowercase
*Return: Always 0 (Success)
*/
int mai(void)
{
	char ch = 'a';

	while (ch <= 'z,')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
