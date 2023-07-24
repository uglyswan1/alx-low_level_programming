#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * _abs - checks the sign of a bumber
 * @n: is the number to be checked
 * Return: n if num is pos, otherwise -n.
*/
/* betty style doc for function main goes there */
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-n);
}
