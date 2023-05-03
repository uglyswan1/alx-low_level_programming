#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
int length = 0;
int i, j;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length; i > 0; i--)
{
for (j = 0; j < length; j++)
{
s[j] = s[i];
}
}
return (s[j]);
}
