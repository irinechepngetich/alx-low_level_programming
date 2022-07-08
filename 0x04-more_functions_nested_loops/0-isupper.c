#include "main.h"

#include <stdio.h>

/**
 * _isupper - checks for an uppercase character
 *
 * @c: the character to check
 *
 * Return: 1 if @c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
