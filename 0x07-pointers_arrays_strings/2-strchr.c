#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c:the character
 * Return: a pointer or NULL
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (j == 0)
{
if (s[i] == c)
{
j++;
return (s[i]);
break;
}
}
}
if (j == 0)
return (NULL);
}
