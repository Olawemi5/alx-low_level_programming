#include <stdio.h>

/**
 * main - Entry
 *
 * Description: lowercase alphabet without q and e.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc != 'q' && 'e'; lc <= 'z')
	{
		putchar(lc);
	}
		putchar('\n')
	return (0);
}
