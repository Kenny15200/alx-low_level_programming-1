#include "main.h"
/**
 * _isupper - function that verifies if a character is uppercase or not
 * @c: tested character
 * Return: returns 1 if it is a uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
