#include <stdio.h>
#include <string.h>

// Utility function to trim whitespace from a string
void trim_whitespace(char *str) {
	int len = strlen(str);
	while (len > 0 && (str[len - 1] == ' ' || str[len-1] == '\n')) {
		str[--len] = '\0';
	}
}
