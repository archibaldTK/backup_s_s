#include "sim_shell.h"

/**
* shell_exit - similar functionality to exit command
* code by ArchibaldTK & TsistiN
* Return: Nothing
*/

	int shell_exit(void)
	{
		return (-1);
	}


/**
* shell_env - function that prints environment
* code by ArchibaldTK & TsistiN
* Return: none
*/

int shell_env(void)
{
	unsigned int x;

	x = 0;
	while (environ[x] != NULL)
	{
		write(STDOUT_FILENO, environ[x], _strlen(environ[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
	return (0);
}
