#include "main.h"
#include <stdio.h>

/**
 * Jack Bauer - prints every minute of the day of jack bauer
 * starting from 00:00 to 23:59.
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
	while (j < 60)
	{
		_putchar((i / 10) + '0');
		-putchar((i % 10) + '0');
		_putchar('.');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar(\'n');
		j++;
	}
	i++;
	}
}


