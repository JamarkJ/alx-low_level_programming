#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *m;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of the string character*/
	m = malloc(size * sizeof(*str) + 1);


	if (m == 0)
		return (NULL);

	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
