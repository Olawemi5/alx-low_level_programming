#include "main_h"

/**
  *_strcmp - compares two strings
  *@s1: str 1
  *@s2: str 2
  *Return: the difference in the two strings
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
