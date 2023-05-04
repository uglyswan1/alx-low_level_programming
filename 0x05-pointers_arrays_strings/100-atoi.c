#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
int i, d;
int n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (s[i - 1] == '+')
{
_putchar('+');
d = s[i] - '0';
n = n * 10 + d;
}
else if (s[i - 1] == '-')
{
_putchar('-');
d = s[i] - '0';
n = n * (-10) + d;
}
}
else
{
return (0);
}
}
return (n);
}
