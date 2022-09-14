#include<unistd.h>

/**
 * _putchar - writes the character c to the standard output.
 *
 * @c: character
 *
 * Return: On succes 1
 * On fail -1 and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
