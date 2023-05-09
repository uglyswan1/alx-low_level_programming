#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: bytes of initial segment of s
 * Return: number of bytes of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int j = 0;
int i, k;
while (accept[j] != '\0')
{
j++;
}
for (i = 0; i < j; i++)
{
for (k = 0; k < j; k++)
{
if (s[i] == accept[k])
{
n++;
}
}
}
return (n);
}
