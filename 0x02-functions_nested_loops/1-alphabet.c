#include "main.h"
/**
 * prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
 void ptint_alphabet(void)
 {
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
