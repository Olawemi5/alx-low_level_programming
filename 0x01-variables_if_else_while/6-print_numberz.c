#include <stdio.h>

/**
 * main - Entry
 *
 * Description: numbers with conditions
 *
 * Return: Always 0
 */

int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
		putchar((nm % 10) + '0');

	putchar('\n');

	return (0);
}
