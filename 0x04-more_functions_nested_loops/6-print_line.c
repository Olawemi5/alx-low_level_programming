#include "main.h"

/**
  *print_line - draw straight line in terminal
  *@n: number of times rpt
  *Return: Always 0
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
