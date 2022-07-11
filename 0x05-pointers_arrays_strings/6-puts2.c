#include "main.h"
/**
 * puts2 - prints one character out of two, starting with the first
 *
 * @str: the string to look at
 *
 * Return: nothing
 */
void puts2(char *str)
{
int i;
int len;
i = 0;
len = _strlen(str) - 1;
while (i <= len)
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
#include "main.h"
/**
 *_strlen - returns the length of a string
 *
 *@str: the string whose length to return
 *
 *Return: the length of the string
 */
size_t _strlen(const char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
