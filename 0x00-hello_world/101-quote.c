#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'description for filedes *buf main and nbyte'
 * Return: Always 1 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 61);
		return (1);
}