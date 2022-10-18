#include "main.h"

/**
  *_islower - Check the code
  *@c: The character
  *Description: a function that checks for lowercase character
  *
  *Return: if lower return 1, else 0.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
