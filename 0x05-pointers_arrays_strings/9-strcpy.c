#include "main.h"

/**
 *_strcpy - copies the string src to dest
 * @src: the string to be copied
 * @dest: the buffer to be copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] <= '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
