#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * natural - write the 9 times table
*/
/* betty style doc for function main goes there */
void natural(void)
{
int i;
int sum = 0;
for (i = 0; i < 1024; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
}
