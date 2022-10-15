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
		putchar(lc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);

	putchar('\n');

	return (0);
}
