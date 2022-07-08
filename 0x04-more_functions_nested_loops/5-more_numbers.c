/*
* File: 5-more_numbers.c
* Auth: muhandasa
*/

#include "main.h"

/**
* more_numbers - Prints the numbers 0-14 ten times
*
* Return: no return
*/

void more_numbers(void)
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (i < 10)
				_putchar((i % 10) + '0');
			if (i > 10)
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
