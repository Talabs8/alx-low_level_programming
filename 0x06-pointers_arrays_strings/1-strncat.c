#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
/* find the size of dest array*/
while (dest[a])
a++;
/*src doesn't need to be \0 terminated if it contains n or more bytes */
for (b = 0; b < n && src[b] != '\0'; b++)
dest[a + b] = src[b];
/*null terminate dest*/
dest[a + b] = '\0';
return (dest);
}
