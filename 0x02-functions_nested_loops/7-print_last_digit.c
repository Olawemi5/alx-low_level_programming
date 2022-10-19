#include "main.h"

/**
  *print_last_digit - check for digit
  *
  *@n: integer to check
  *
  *Return: value of last digit
  */

int print_last_digit(int n)

{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
