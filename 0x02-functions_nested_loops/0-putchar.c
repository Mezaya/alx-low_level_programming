#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar.
 * Description: prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
char tex[9] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
putchar(tex[i]);
}
putchar('\n');
return (0);
}
