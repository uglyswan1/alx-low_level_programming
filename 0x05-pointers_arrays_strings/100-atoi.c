#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (s[i - 1] == '+')
{
_putchar('+');
}
else if (s[i - 1] == '-')
{
_putchar('-');
}
_putchar(s[i]);
}
else
{
n = 0;
}
}
if (n == 0)
return (0);
}
