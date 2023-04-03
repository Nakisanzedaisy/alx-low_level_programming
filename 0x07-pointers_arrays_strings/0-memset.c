#include "main.h"
#include <stddef.h>
/* Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b*/

char *_memset(char *s, char b, unsigned int n)
{
    char *p = s;

    while (n--)
    {
	*p++ = b;
    }
    return (s);
}
