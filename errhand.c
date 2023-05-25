#include "sim_shell.h"

/**
 * errors - function to find appropriate error message
 * code by ArchibaldTK & TsistiN
 * @error: code searcher
 * Return: None
 */
void errors(int error)
{
	switch (error)
	{
	case 1:
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("Error");
		break;

	case 2:
		perror("Error");
		break;

	case 3:
		write(STDERR_FILENO, ERR_MALLOC, _strlen(ERR_MALLOC));
		break;
	case 4:
		write(STDERR_FILENO, ERR_PATH, _strlen(ERR_PATH));
		break;

	default:
		return;
	}
}
Footer

