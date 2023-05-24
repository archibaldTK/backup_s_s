#include "sim_shell.h"

/**
 * free_all - function to release memory from ram
 * code by ArchibaldTK & TsistiN
 * @tokens: user input
 * @path: path string
 * @line: input
 * @fullpath: string of command directory
 * @flag: full path flagger
 * Return: None
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag == 1)
		free(fullpath);
}

/**
 * free_dp - free pointer in pointer
 * code by ArchibaldTK & TsistiN
 * @array: an array of pointers
 * @length: number of pointers
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int x;

	x = 0;
	while (x < length)
	{
		free(array[x]);
		x++;
	}
	free(array);
}
