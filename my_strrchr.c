#include "my_libc.h"

char *
my_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c) {
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}