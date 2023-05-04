#include "main.h"

/**
 *_strcat - concatenates two strings
 * @dest: string to be added to
 * @src: string to add
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int dest_l = 0;
int dest_s = 0;
int length = 0;
int k;
while (dest[i] != '\0')
{
dest_l++;
i++;
}
while (src[j] != '\0')
{
dest_s++;
j++;
}
j = 0;
length = dest_l + dest_s;
for (k = dest_l + 1; k < length + 1; k++)
{
dest[k] = src[j];
j++;
}
return (dest);
}
