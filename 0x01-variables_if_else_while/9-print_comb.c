#include <stdio.h>
/**
* main -  program that prints all the numbers of base 16 in lowercase
* You can only use the putchar function
* Return: 0
*/
int main(void)
{
int n = 48;
while (n >= 48 && n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
