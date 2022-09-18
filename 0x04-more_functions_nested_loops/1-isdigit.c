#include "main.h"

/**
 * _isupper - a function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is digit, 0 otherwise
 */
int _isupper(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
