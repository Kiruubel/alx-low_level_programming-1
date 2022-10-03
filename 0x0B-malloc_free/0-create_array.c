#include <stdlib.h>

/**
 * create_array - creates an array of a specific size and fills with a char.
 * @size : the Size of the array to create.
 * @c :charcter
 * Return: An array of characters.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(size);
	if (ar == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
