#include "main.h"

/**
  *print_alphabet - check the code
  *
  *Description: prints the alphabet, in lowercase
  */

void print_alphabet(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	_putchar('\n');

	return (0);
}
