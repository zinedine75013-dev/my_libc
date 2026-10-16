#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_libc.h"

static void
check(const char *s)
{
	char *copy;

	copy = my_strdup(s);
	if (copy == NULL) {
		printf("\"%s\" : NULL (KO)\n", s);
		return;
	}
	printf("\"%s\" -> \"%s\" (%s)\n", s, copy,
	    strcmp(copy, s) == 0 && copy != s ? "OK" : "KO");
	free(copy);
}

int
main(void)
{
	char text[] = "hello";
	char *copy;

	check("hello");
	check("");
	check("une phrase un peu plus longue");
	copy = my_strdup(text);
	if (copy != NULL) {
		copy[0] = 'J';
		printf("independance : %s / %s (%s)\n", text, copy,
		    strcmp(text, "hello") == 0 ? "OK" : "KO");
		free(copy);
	}
	return (0);
}