#include "main.h"

/**
  *_sqrt_recursion - square root of a number
  *@a: character 1
  *@b: character 2
  *Return: int
  */

int _sqrt_recursion(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
  *_sqrt_recursion - returns the natural square root of a number
  *  @n: int
  * Return: natural square root or -1
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
