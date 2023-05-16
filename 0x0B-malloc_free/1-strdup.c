#include "main.h"
#include <stdio.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: 0 or 1
 */
char *_strdup(char *str)
{
char *newstr;
int i, j = 0;
if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
newstr = malloc(sizeof(char) * (i + 1));
if (newstr == NULL)
{
return (NULL);
}
for (j = 0; str[j]; j++)
{
newstr[j] = str[j];
}
return (newstr);
}
