#include<unistd.h>

/**
 *_putchar - writes the character c to the standard output.
 *
 * @c: character
 *
 *return: on success 1. 
 On erreor,-1 is returned, and errn o is set.
 */
int _putchar(char c){
	return(write(1, &c, 1));
}
