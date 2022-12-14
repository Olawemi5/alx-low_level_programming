#include "main.h"

/**
  *is_prime_number - check for prime
  *@a: int 1
  *@b: int 2
  *Return: int
  */

int is_prime_number(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
  * is_prime_number - tell if prime
  *@n: int
  *Return: int
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
