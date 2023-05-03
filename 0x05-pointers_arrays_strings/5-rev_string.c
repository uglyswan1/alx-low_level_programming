#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
int length = 0;
int i, k;
k = 0;
while (*s != '\0')
{
length++;
s++;
}
for (i = length; i > 0; i--)
{
if (k < length)
{
*s = s[i];
k++;
}
}
}
