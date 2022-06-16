#include <stdio.h>
#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: input string
 * Return: caps on first letter of a separator
*/
char *cap_string(char *s)
{
int c = 0, i;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (s[c])
{
i = 0;
while (i < cspc)
{
if ((c == 0 || s[c - 1] == spc[i]) && (s[c] >= 97 && s[c] <= 122))
s[c] -= 32;
i++;
}
c++;
}
return (s);
}
