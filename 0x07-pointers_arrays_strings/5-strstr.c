#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 * @needle: input
 * @haystack:input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	int j;
	int i;

	if (needle_len > haystack_len)
	{
		return (NULL);
	}

	for (i = 0; i <= haystack_len - needle_len; ++i)
	{
		for (j = 0; j < needle_len; ++j)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}

	}
	return (&haystack[i]);
}
