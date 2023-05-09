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
int j = 0;
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
if (s[i] == '\0' && j == 0)
return (NULL);
}
