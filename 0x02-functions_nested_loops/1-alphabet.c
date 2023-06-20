#include "main.h"
#include <unistd.h>

/**
 * prints the alphabets in lowercase followed by a new line
 *
 * main - Entry point
 *
 * Return: 0. (Success)
 */
void print_alphabets(void)
{
	char i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;

	}
	_putchar('\n');
}

