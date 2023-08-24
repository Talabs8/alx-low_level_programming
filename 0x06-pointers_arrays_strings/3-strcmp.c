#include "main.h"
/**
 * _strcmp - This function compares two strings
 * @s1: string 1 input to compare
 * @s2: string 2 input to be compared
 * Return: 0 if s1 and s2 are equal
 * negative integer if the stopping character
 * in @s1 was less than the stopping
 * character in @s2
 * positive integer if the stopping character
 * in @s1 was greater than the stopping
 * character in @s2
 */
int _strcmp(char *s1, char *s2)
{
while (((*s1 != '\0') && (*s2 != '\0'))  && (*s1 = *s2))
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
