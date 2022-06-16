#include <stdio.h>
#include "main.h"
/**
 *reverse_array - reverses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
int tempo, c;
n = n - 1;
c = 0;
while (c <= n)
{
tempo = a[c];
a[c++] = a[n];
a[n--] = tempo;
}
}
