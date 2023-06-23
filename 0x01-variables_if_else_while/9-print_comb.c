#include <stdio.h>

/**
*main - Entry point A prints all the numbers of base 16 in lowercase
*Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + 48);
if (digit != 9)
{
putchar(",");
putchar(",");
}
digit++;
}
putchar('\n');
return  (0);
}
