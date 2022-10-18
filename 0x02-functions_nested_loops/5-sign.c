#include "main.h"

/**
  *print_sign - Chaeck the sign
  *
  *@n: Character to be checked
  *
  *Return: 1 and print 0 if greater than 0, - if less, 0 if 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
