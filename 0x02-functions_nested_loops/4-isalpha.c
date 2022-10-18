#include "main.h"

/**
  *_isalpha - check the code
  *
  *@c: The character
  *
  *Description: function that checks for alphabetic character
  *
  *Return: Return 1 if alphabet, Else 0.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
