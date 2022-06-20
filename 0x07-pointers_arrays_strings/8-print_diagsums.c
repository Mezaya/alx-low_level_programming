#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_diagsums - Entry point
* @a: input
* @size: input
*  Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i, n, totalOne = 0, total2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
totalOne = totalOne + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
total2 = total2 + a[n];
printf("%d, %d\n", totalOne, total2);
}
