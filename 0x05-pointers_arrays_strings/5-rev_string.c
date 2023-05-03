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
while (*s != '\0')
{
length++;
s++;
}
for (k = 0; k <= length; k++)
{
s--;
}
for (i = length + 1; i >= 0; i--)
{
*s = s[i];
s++;
}

}
