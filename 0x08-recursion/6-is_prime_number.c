#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Description: checks whether n is a prime number or not
 * Return: 1 if the input is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	else if (n == 2)
		return (1);
	return (recursive_prime(n, n / 2));
}

/**
 * recursive_prime - function with additional argument to assist in primality
 * test
 * @n: number to be tested
 * @i: testing argument
 *
 * Description: primality test helper
 * Return: 1 if prime, 0 otherwise
 */
int recursive_prime(int n, int i)
{
	if (i < 2)
		return (1);
	else if (n % i == 0)
		return (0);
	return (recursive_prime(n, --i));
}
