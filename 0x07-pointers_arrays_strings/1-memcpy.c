#include "main.h"
 /**
  * _memcpy - function copies @n bytes from memory area @src
  * to memory area @dest
  * @n: number of bytes
  * @src: memory where it is copied
  * @dest: memory where is stored
  * Return: a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
 /* Copies n bytes from memory area src to memory area dest. */
for (unsigned int i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
