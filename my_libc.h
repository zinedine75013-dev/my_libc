#ifndef MY_LIBC_H
#define MY_LIBC_H

#include <stddef.h>

size_t   my_strlen(const char *);
size_t   my_strlen(const char *);
char	*my_strcpy(char *, const char *);
char	*my_strncpy(char *, const char *, size_t);
char	*my_strcat(char *, const char *);
char	*my_strncat(char *, const char *, size_t);
int      my_strcmp(const char *, const char *);
int	     my_strncmp(const char *, const char *, size_t);
char	*my_strchr(const char *, int);
char    *my_strrchr(const char *, int);
char    *my_strstr(const char *, const char *);
void    *my_memset(void *, int, size_t);
#endif