#include "sim_shell.h"/**
 * _getenv - function that pulls an environment
 * code by ArchibaldTK & TsistiN
 * @name: env to be aquired
 * Return: String of the environment
 */
char *_getenv(const char *name)
{
	char **environ_copy;
	char *variable, *value, *path;
	int compare;
	unsigned int path_length, environ_length, length, x;	environ_length = 0;
	while (environ[environ_length] != NULL)
		environ_length++;
	environ_copy = NULL;
	environ_copy = copy_env(environ_copy, environ_length);	length = _strlen((char *)name);
	x = 0;
	while (environ_copy[x] != NULL)
	{
		variable = environ_copy[i];
		compare = _strncmp((char *)name, variable, length);
		if (compare == 1)
		{
			value = strtok(variable, "=");
			value = strtok(NULL, "\n ");
			if (*value == '\0')
			{
				errors(4);
				exit(EXIT_FAILURE);
			}
			path_length = _strlen(value);
			path = malloc(sizeof(char) * path_length + 1);
			if (path == NULL)
			{
				errors(3);
				return (NULL);
			}
			path = _strcpy(path, value);
			free_dp(environ_copy, environ_length);
			return (path);
		}
		x++;
	}
	return (NULL);
}/**
 * copy_env - function to create a copy of env
 * code by ArchibaldTK & TsistiN
 * @environ_copy: env copy
 * @environ_length: number of characters in env
 * Return: holder of the address of new env
 */
char **copy_env(char **environ_copy, unsigned int environ_length)
{
	char *variable;
	unsigned int variable_length;
	unsigned int x;	environ_copy = malloc(sizeof(char **) * (environ_length));
	if (environ_copy == NULL)
	{
		errors(3);
		return (NULL);
	}	x = 0;
	while (x < environ_length)
	{
		variable = environ[x];
		variable_length = _strlen(variable);		environ_copy[x] = malloc(sizeof(char) * variable_length + 1);
		if (environ_copy[x] == NULL)
		{
			errors(3);
			return (NULL);
		}
		_strcpy(environ_copy[x], environ[x]);
		x++;
	}	return (environ_copy);
}
