#include "main.h"

/**
  *print_last_digit - check for digit
  *
  *@c: integer to check
  *
  *Return: value of last digit
  */

int print_last_digit(int c)

{
	int dg = c % 10;

	if (dg < 0)
		dg *= -1;

	_putchar(dg + '0');

	return (0);
}
