#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * _islower - checks for lowercase character
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
*/
/* betty style doc for function main goes there */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
