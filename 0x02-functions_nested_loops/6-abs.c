#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	if (n < 0)
		n = (-1) * n;
	printf("%d\n", n);
	return (0);
}
