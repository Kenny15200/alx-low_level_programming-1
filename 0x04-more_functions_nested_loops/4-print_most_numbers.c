#include "main.h"
#include <stdio.h>

/*
 * print_most_numbers - write a function that prints number from 0 yo 9
 *
 * Description: should not print 2 and 4
 *
 * Return: return 0
 */
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i++);
		}
	}
	_putchar("\n");
}
