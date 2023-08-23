#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of int
 * @a: pointer to int array
 * @n: number of elements to swap
 * Return:void
 */
void reverse_array(int *a, int n)
{
int b = 0;
int e = n - 1;
int temp;
while (b < e)
{
temp = a[b];
a[b] = a[e];
a[e] = temp;
b++;
e--;
}
}
