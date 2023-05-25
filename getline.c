#include "sim_shell.h"

/**
 * _getline - function that recieves user input
 * code by ArchibaldTK & TsistiN
 * @input: user input holder
 * Return: User input
 */
char *_getline(FILE *input)
{
	char *line;
	ssize_t read;
	size_t len;

	line = NULL;
	len = 0;
	read = getline(&line, &len, input);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
Footer

