#include <stdio.h>

/**
 * main - Entry
 *
 * Description: writing uppercase and lowercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(lc);
		putchar(uc);

	putchar('\n');

	return (0);
}
