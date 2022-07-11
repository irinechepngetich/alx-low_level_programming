#include "main.h"
/**
 *print_rev - Prints a string in reverse.
 *@s: The string to be printed.
 */
void print_rev(char *s)
{
int len = _strlen(s) - 1;
while (len >= 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
/**
 * _strlen - returns the length of a string
 *
 * @str: the string whose length to return
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
