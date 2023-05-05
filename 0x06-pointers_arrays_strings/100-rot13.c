#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: input value
 * Return: n value
 */
char *rot13(char *n)
{
int i, j;
char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 26; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
