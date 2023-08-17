#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *followed by a new line
 * Return: 0
 */
int main(void)
{
long long int n = 612852475143;
long long int i, max_prime = -1;
for (i = 2; i <= sqrt(n); i++)
{
while (n % i == 0)
{
max_prime = i;
n /= i;
}
}
if (n > 1)
{
max_prime = n;
}
printf("%lld\n", max_prime);
return (0);
}
