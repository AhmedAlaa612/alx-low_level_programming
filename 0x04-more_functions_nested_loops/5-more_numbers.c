#include "main.h"
/**
 * more_numbers - print from 1 to 14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int i, j, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			y = j;
			if (j > 9)
			{
				_putchar(y / 10 + '0');
				y %= 10;
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
