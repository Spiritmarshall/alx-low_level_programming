#include "main.h"

/**
 * print_alphabet - print alphabet
 * Dscription:It prints the alphabet in lower case followed by a new line.
 * Retun: nothing.
 */
void print_alphabet(void)
{
	int i;

	for (i= 'a'; i <='z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
