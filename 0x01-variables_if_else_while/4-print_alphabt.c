#include <stdio.h>
/**
*main - Entry point A prints the alphabet in lowercase and then in uppercase
*Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
