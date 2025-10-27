#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square on the terminal
 * @size: size of the square
 *
 * Description: Prints a square using the '#' character.
 *              The square has size rows and size columns.
 *              Each line ends with a newline character.
 *              If size is 0 or less, only prints a newline.
 */

	void print_square(int size)
{
		int a;
		int o;

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}
		{
			for (a = 0; a < size; a++)
			{
				for (o = 0; o < size; o++)
				_putchar('#');
				_putchar('\n');
			}
		}

}
