#include "main.h"
#include <stdio.h>

/**
  *print_numbers - printing numbers
  *Return: Always 0.
  */

void print_numbers(void)
{
	int y = 0;

	while (y <= 9)
		_putchar(y++ + '0');

	_putchar('\n');
}
