#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, nonzero otherwise
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of short: %zu bytes\n", sizeof(short));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of long long: %zu bytes\n", sizeof(long long));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of long double: %zu bytes\n", sizeof(long double));

return (0);
}
