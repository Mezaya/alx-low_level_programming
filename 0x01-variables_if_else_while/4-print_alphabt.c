#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabets in lowercase then uppercase.
 * You can only use the putchar 3 times and no printf allowed
 * Return: 0
 */
int main(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'e' || alph == 'q')
{
alph += 1;
}
else
{
putchar(alph);
}
}
putchar('\n');
return (0);
}
