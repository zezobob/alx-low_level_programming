#include <stdio.h>
/**
*main - Entry point A prints all single digit members
*Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
printf("%i", digit);
digit++;
}
printf("\n");
return (0);
}
