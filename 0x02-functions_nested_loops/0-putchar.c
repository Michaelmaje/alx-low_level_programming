#include "main.h"
#include <stdio.h>


/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		putchar(p[i]);
		}
		putchar('\n');
	return (0);
}
