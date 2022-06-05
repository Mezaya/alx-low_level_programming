#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase then uppercase, followed by a new line
 * You can only use the putchar 3 times and no printf allowed
 * Return: 0
 */
int main(void)
{
int alph;
int ALPH;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
{
putchar(ALPH);
}
putchar('\n');
return (0);
}
