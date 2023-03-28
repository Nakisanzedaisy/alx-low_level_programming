#include <unistd.h>
/**
 * _putchar _writes the character c to stdout
 * @C: The character to be printed
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int_putchar(char c);
{
	return(write(1, &c, 1));
}	
