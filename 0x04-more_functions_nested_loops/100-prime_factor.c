#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *followed by a new line
 * Return: 0
 */
int main(void)
{
long int n = 612852475143;
long int i, max_prime = -1;
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max_prime = i;
n = n / i;
}
}
if (n > 2)
{
max_prime = n;
}
printf("%ld\n", max_prime);
return (0);
}
