#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @a: 8x8 array representing the chessboard
 *
 * Description: Prints the chessboard row by row, each followed by a newline.
 */
void print_chessboard(char (*a)[8])
{
	int alph, tabl;

	for (alph = 0; alph < 8; alph++)
	{
		for (tabl = 0; tabl < 8; tabl++)
			_putchar(a[alph][tabl]);
		_putchar('\n');
	}
}
