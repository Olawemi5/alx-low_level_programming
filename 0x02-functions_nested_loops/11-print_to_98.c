#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - printing number to 98 from a number
  *
  *@n: thr starting number
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
