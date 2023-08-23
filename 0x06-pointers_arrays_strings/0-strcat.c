#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
char *t = dest;
/* Move the destination pointer to the end of the destination string*/
while (*dest != '\0')
{
dest++;
}
/* Copy the source string to the destination */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Add the terminating null byte */
*dest = '\0';
return (t);
}
