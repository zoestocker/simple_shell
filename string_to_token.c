#include "main.h"

/**
 * string_to_token - splits a string into tokens
 * @str: the string passed as an argument
 *
 * Return: the token
 */
char **string_to_token(char *str)
{
	int i = 0;
	const char separator[] = " ";
	int spaces = n_spaces(str);
	char **tokens = malloc(sizeof(char *) * (spaces + 1));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(1);
	}
	token = strtok(str, separator);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, separator);
		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}
