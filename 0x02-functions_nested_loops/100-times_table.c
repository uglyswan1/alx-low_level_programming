#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * print_times_table - write the n times table
 * @n: number of tables
*/
/* betty style doc for function main goes there */
void print_times_table(int n){
int i, j, k;
if (n >= 0 && n <= 15){
for (i = 0; i <= n; i++){
for (j = 0; j <= n; j++){
k = j * i;
if (j == 0){
_putchar(k + '0');
} if (k < 10 && j != 0){
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
} else if (k >= 10 && k <= 99){
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
} else if (k >= 100){
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0'); }}
_putchar('\n'); }}}
