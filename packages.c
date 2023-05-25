#include "sim_shell.h"

/**
 * _strcmp - function that compares two strings
 * code by ArchibaldTK & TsistiN
 * @name: string to be compared
 * @variable: string to be compared
 * @length: string 1 length
 * Return: 1 if successful and -1 if failed
 */
int _strcmp(char *name, char *variable, unsigned int length)
{
	unsigned int var_length;
	unsigned int x;

	var_length = _strlen(variable);
	if (var_length != length)
		return (-1);

	x = 0;
	while (name[x] != '\0' && variable[x] != '\0')
	{
		if (name[x] != variable[x])
			return (1);
		x++;
	}
	return (0);
}

/**
 * _strncmp - function that compares two strings up to n
 * code by ArchibaldTK & TsistiN
 * @name: string to compare
 * @variable: string 2
 * @length: length of string 1
 * Return: 1 if successful and -1 if failed
 */
int _strncmp(char *name, char *variable, unsigned int length)
{
	unsigned int x;

	x = 0;
	while (x < length)
	{
		if (name[x] != variable[x])
			return (-1);
		x++;
	}
	return (1);
}

/**
 * *_strcpy - function to copy a string
 * @dest: pointer to new string
 * @src: string to be copied
 * Return: New string
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int i = _strlen(src);

	for (x = 0; x <= i; x++)
		dest[x] = src[x];

	return (dest);
}
/**
 * _strlen - function that determines length of a string
 * @str: string to be evaluated
 * Return: String length
 */
int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;

	return (x);
}
