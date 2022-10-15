#include <stdio.h>

/**
 * main - prints the alphabt in lower cases,except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar (la);
	}
	putchar('\n');
	return (0);
}

