#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
int length = 0;
int i;
int j = 0;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length; i > 0; i--)
{
if (j < length)
{
s[j] = s[i];
j++;
}
s--;
}
*s = s[j];
}
