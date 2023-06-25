#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - print last digit of a number.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else if lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
