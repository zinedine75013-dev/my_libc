#include <stdlib.h>

#include "my_libc.h"

char *
my_strdup(const char *s)
{
	char *copy;
	size_t len;
	size_t i;

	len = 0;
	while (s[len] != '\0')
		len++;
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len) {
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}