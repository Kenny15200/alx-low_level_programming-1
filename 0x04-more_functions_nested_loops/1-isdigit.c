#include "main.h"
#include <stdio.h>

/*
 * _isdigit - check for digit
 *
 * @c: the character to be checked
 *
 * Description: a c program
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
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
