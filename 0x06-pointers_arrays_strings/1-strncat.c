#include <stdio.h>
#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dstlen = 0, j = 0;
/* j is a counter for  n bytes of src to be concatenated */
/* dstlen = length of destination string */
while (dest[dstlen])
{
dstlen++;
}
while (j < n && src[j])
{
dest[dstlen] = src[j];
dstlen++;
j++;
}
dest[dstlen + n + 1] = '\0';
return (dest);
}

