#include "main.h"

/**
 * main - main simple shell
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0, -1 on error.
 */
int main(int argc, char **argv)
{
	int response;
	char **tokens;
	size_t buffsize = BUFSIZ;
	int isPipe = 0;
	char *buffer;

	if (argc >= 2)
	{
		if (execve(argv[1], argc, NULL) == -1)
		{
			perror("Error");
			exit(-1);
		}
		return (0);
	}
	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	do {
		if (isatty(fileno(stdin)))
		{
			isPipe = 1;
			_puts("cisfun#: ");
		}
		getline(&buffer, &buffsize, stdin);
		buffer[_strlen(buffer) - 1] = '\0';
		tokens = string_to_token(buffer);
		response = exec(tokens);
	} while (isPipe && response != -1);
	return (0);
}
