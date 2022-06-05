#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
    int alph;
    for(alph = 'a'; alph <= 'z'; alph++)
    {
        putchar(alph);
    }
        putchar('\n');
return (0);
}
