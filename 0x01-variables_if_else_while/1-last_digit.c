#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n[sizeof(n)-1] > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, n[sizeof(n)-1]);
}
else if (n[sizeof(n)-1] == 0)
{
printf("Last digit of %d is %d and is 0", n, n[sizeof(n)-1]);
}
else if (n[sizeof(n)-1] < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, n[sizeof(n)-1]);
}
return (0);
}
