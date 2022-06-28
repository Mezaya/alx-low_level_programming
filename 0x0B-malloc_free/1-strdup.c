#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *_strdup - return a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter.
* @str: string
* Return: pointer of an array of chars.
* +1 on the size puts the end of string character.
*/
char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;
if (str == NULL)
return (NULL);
for (size = 0; str[size] != '\0'; size++);
m = malloc(size * sizeof(*str) + 1);
size++;
if (m == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
m[i] = str[i];
i++;
}
return (m);
}
