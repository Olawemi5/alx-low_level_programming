#include "main.h"

/**
  *print_alphabet_x10 - check the code
  *
  *Description: prints 10 times the alphabet, in lowercase
  */

void print_alphabet_x10(void)
{
	char lc;
	int rp;

	for (rp = 1; rp <= 10; rp++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
