#include "my_libc.h"

char *
my_strtok(char *str, const char *delim)
{
	static char *next = NULL;
	char *token = NULL;
	size_t i;

	if (str != NULL)
		next = str;
	if (next == NULL)
		return (NULL);
	while (*next != '\0') {
		i = 0;
		while (delim[i] != '\0' && delim[i] != *next)
			i++;
		if (delim[i] == '\0') {
			if (token == NULL)
				token = next;
		} else if (token != NULL) {
			*next = '\0';
			next++;
			return (token);
		}
		next++;
	}
	next = NULL;
	return (token);
}