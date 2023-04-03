#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; ++p1)
	{
		for (p2 = accept; *p2 != '\0'; ++p2)
		{
			if (*p1 == *p2)
			{
				return (p1);
			}
		}
	}
	return (NULL);
}
