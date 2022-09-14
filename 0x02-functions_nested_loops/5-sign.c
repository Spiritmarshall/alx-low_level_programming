#include "main.h"
/**
 * print_sign: sign of a number
 * @n: an input
 * Description: this function prints the sign of a number.
 * Return: 1 if number is positive, 0 if number is 0
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

