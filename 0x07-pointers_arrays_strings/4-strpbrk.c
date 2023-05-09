#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: string to compare with
 * Return: a pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char k;
int m = 0;
k[0] = ' ';
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
while (k[m] != '\0')
{
if (k[m] != s[i])
{
return (s);
}
k[m] = s[i];
m++;
}
}
}
}
return ('\0');
}
