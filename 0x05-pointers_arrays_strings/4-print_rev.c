#include "main.h"
/**
 *print_rev - Prints a string in reverse.
 *@s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0, index;
while (s[index++])
len++;
for (index = len - 1; index >= 0; index--)
_putchar(s[index]);
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
