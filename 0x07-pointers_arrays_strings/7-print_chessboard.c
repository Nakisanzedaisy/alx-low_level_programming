#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
