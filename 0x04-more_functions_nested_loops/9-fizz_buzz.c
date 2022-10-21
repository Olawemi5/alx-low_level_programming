#include <stdio.h>
#include "main.h"

/**
  *main - Entry
  *Description: prints the numbers 1 - 100 w/
  *Fizz for multiples of 3, Buzz for multiples of 5,
  *and FizzBuzz for multiples of both.
  *
  *Return: Always 0.
  */

int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
	}
	printf('\n');
	return (0);
}
