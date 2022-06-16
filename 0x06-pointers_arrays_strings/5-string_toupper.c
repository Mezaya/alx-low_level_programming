#include <stdio.h>
#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
int c;
/** c = length **/
c = 0;
while (x[c] != '\0')
{
if (x[c] >= 97 && x[c] <= 122)
{
x[c] = x[c] - 32;
}
c++;
}
return (x);
}
