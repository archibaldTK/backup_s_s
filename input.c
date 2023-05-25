#include "sim_shell.h"

/**
 * prompt - function to output propmt to standard output
 * code by ArchibaldTK & TsistiN
 * @fd: stream selector
 * @buf: user input storage
**/
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}

/**
 * _puts - function to output strings in STDOUT
 * code by ArchibaldTK & TsistiN
 * @str: string that will be written
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
