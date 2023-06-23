#include <stdio.h>

/**
*main - Entry point A prints the alphabet in lowercase and then in uppercase
*Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';
char ch = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
