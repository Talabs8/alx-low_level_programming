#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * Return: 1 if c is uppercase
 *  and 0 otherwise
 * @c: character to be checked
 */
int _isupper(int c)
{
  /* Returns 1 if c is uppercase, 0 otherwise. */
return (c >= 'A' && c <= 'Z');
}
