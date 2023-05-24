#include "sim_shell.h"

/**
* builtin_execute - function to select which builtin is appropriate
* code by ArchibaldTK & TsistiN
* @tokens: user input
* Return: Parsed input
*/
int builtin_execute(char **tokens)
{
	int status;
	unsigned int length;
	unsigned int num;
	unsigned int x;

	built_s builtin[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{NULL, NULL}
	};

	if (tokens[0] == NULL)
		return (1);

	length = _strlen(tokens[0]);

	num = shell_num_builtins(builtin);
	for (x = 0; x < num; x++)
	{
		if (_strcmp(tokens[0], builtin[x].name, length) == 0)
		{
			status = (builtin[x].p)();
			return (status);
		}
	}
	return (1);
}

/**
* shell_num_builtins - function to determine how many builtin exist
* code by ArchibaldTK & TsitsiN
* @builtin: reciever
* Return: Possible options
*/

int shell_num_builtins(built_s builtin[])
{
	unsigned int x;

	x = 0;
	while (builtin[x].name != NULL)
		x++;

	return (x);
}
