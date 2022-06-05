#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10.
 * Not using Char and printf.
 * Return: 0
 */
int main(void)
{
int v = 48;
while (v >= 48 && v <= 57)
{
putchar(v);
v++;
}
putchar('\n');
return (0);
}
