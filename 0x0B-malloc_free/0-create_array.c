#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: An Array Initialized with the specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *character;

	counter = 0;


	if (size == 0)
	{
		return (NULL);
	}

	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}
	while (counter < size)
	{
		character[counter] = c;
		counter++;
	}

	character[counter] = '\0';

	return (character);
}
