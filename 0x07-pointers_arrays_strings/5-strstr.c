#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer or a NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
while (needle[j] != '\0' && haystack[i] != '\0')
{
if (haystack[i++] == needle[j++])
{
return (&haystack[i]);
}
else
{
break;
}
}
return (0);
}
