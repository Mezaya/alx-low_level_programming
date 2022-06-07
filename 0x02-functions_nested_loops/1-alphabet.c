#include "main.h"
/**
 * print_alphabet - function tha prints the alphabet, lowercase
 * you can only use putchar twice
 * Return: nothing
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
}
