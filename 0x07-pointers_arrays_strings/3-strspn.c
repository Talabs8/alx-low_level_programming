#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: consist only of bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int z = 0;
int x, y;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] != 32)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
z++;
}
}
else
return (z);
}
return (z);
}
