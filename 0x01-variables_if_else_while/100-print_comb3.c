#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/
int main(void)
{
int r = 48;
int b = 49;
int m = 0, i = 0, a = 8;
while (i  <= a && a != -1)
{
i++;
while (m <= a)
{
putchar(r);
putchar(b);
if (r != 56 || b != 57)
{
putchar(',');
putchar(' ');
}
b++;
m++;
}
r++;
b = b - a;
a--;
i = 0;
m = 0;
}
putchar('\r');
return (0);
}
