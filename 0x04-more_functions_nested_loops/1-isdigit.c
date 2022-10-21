#include "main.h"
#include <stdio.h>

/**
  *_isdigit - checking for numbers
  *@c: character
  *
  *Return: 1 if digit, 0 otherwise.
  */

int _isdigit(int c);
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
