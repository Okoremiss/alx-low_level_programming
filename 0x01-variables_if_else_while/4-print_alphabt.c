#include <stdio.h>
/**
 * main - prints alphbets in lowercase, except letter q and e.
 * Return: Always 0.
 */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar (letter);
	}
	
	putchar('\n');

	return (0);
}
