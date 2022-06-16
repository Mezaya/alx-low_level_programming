#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
int ca = 0, cb = 0;
while (src[cb])
{
cb++;
}
while (ca < n && src[ca])
{
dest[ca] = src[ca];
ca++;
}
while (ca < n)
{
dest[ca] = '\0';
ca++;
}
return (dest);
}
