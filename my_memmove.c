#include "my_libc.h"

void *
my_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = dst;
	s = src;
	if (d < s) {
		i = 0;
		while (i < len) {
			d[i] = s[i];
			i++;
		}
	} else {
		i = len;
		while (i > 0) {
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}