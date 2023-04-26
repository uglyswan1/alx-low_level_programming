#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * _islower - checks for lowercase character
 */
/* betty style doc for function main goes there */
int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i == c)
{
return(1);
}
else
{
return(0);
}
}
}
