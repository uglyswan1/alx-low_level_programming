#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void){
int mdp[10];
int i;
for (i = 0; i < 10; i++)
{
mdp[i] = rand() % 10;
}
printf("%d", mdp);
return (0);
}
