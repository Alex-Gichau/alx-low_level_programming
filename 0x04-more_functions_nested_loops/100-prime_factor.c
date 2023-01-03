#include <stdio.h>
/**
 * isprime - Check if integer is divisible by any other number than 1
 * @n: Integer to check
 *
 * Retirn: 1 if n is prime
 * otherwise 0
 */
int isprime(long n)
{
	long i;
	long -_max = n / 2;

	for (i = 2; i < i_max; ++i)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - find the largest prime_factor of an integer
 * @n: Integer to factor
 *
 * Return: largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long i = 2;

	while (!isprime(n))
	{
		while (n % i || !isprime(i))
			++i;
		n /= i;
	}
	return (n);
}

/** 
 * main - find and print the largest factor
 *
 * Return: 0
 */
int main(void)
{
	printf("%ld\n", largest_prime_factor(612852475143));
	return (0);
}
