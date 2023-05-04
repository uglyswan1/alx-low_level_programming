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
n = s[i];
}
else if (s[i - 1] == '-')
{
n = -s[i];
}
}
else
{
return (0);
}
}
return (n);
}
