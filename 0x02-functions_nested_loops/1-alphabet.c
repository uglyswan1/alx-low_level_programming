#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print alphabet in lower case
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
