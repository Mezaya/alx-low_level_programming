#include "main.h"
/**
 * print_alphabet - function tha prints the alphabet, lowercase
 * you can only use putchar twice
 * Return: nothing
 */
void print_alphabet(void)
{
int l = 'a';
while (l <= 'z')
{
_putchar(l);
l += 1;
}
_putchar(10);
}
