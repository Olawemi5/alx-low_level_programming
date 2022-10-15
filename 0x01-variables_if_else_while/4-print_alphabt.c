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

	for (lc = 'a'; lc != 'q'; lc != 'e'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
		putchar('\n');
	return (0);
}
