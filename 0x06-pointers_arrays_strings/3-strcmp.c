#include "main.h"
/**
 * _strcmp - This function compares two strings
 * @s1: string 1 input to compare
 * @s2: string 2 input to be compared
 * Return: 0 if s1 and s2 are equal
 * else Return *s1[i] - *s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
