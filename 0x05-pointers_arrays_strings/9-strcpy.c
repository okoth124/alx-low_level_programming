#include "main.h"
/**
 * _strcpy - function copys str pointed by src
 * @dest: input
 * @src: input
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
