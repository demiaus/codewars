#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_ip(const char *addr);
int is_valid_range(int i);
int is_valid_len(const char *str);

int main(void) {

	char *str = "123.123.123.1111";

    if (is_valid_ip(str)) {
        printf("ip \"%s\" is NOT valid\n", str);
    }
    else {
        printf("ip \"%s\" is valid\n", str);
    }

    return 0;
}

int is_valid_ip(const char *addr) {

	int str_len = 0;
	const char *delim = ".";
	char *str_c = strdup(addr);
	char *token = strtok(str_c, delim);

	// loop 4 times (octets in valid string)
	for (int i = 0; i < 4; i++) {

		// return if token reached NULL before 4 octets (too few octets)
		// 
		if (token == NULL) {
			free(str_c);
			return 0;
		}
		
		// check octet is numeric
		for (int j = 0; j < strlen(token); j++) {
			if (!(isdigit(token[j]))) {
				free(str_c);
				return 0;
			}		
		}
		
		// check octet string length matches numeric value
		if (!(is_valid_len(token))) {
			free(str_c);
			return 0;	
		}
		
		// check octet is in valid range
		if (!(is_valid_range(atoi(token)))) {
			free(str_c);
			return 0;
        }

		// keep track of string length and advance token
		str_len += strlen(token);
		token = strtok(NULL, delim);
	}
	
	str_len += 3; // add the amount of dots to string length
	free(str_c); // free string copy
	
	// check string ending is valid ( NULL terminated: no extra bytes after valid ip)
	if (addr[str_len] != '\0') {
		return 0;
	}
	
	return 1;

}

// check string representation of octet matches numeric value
// i.e. check against invalid octets e.g. 000, 001...
int is_valid_len(const char *str) {

	int num = atoi(str);
	int len = strlen(str);
	int digits = 0;
	
	while (num != 0) {
		num /= 10;
		++digits;
	}

	if (!(len == digits)) {
		return 0;
	}

	return 1;
}

// check octet is in valid range 0-255
int is_valid_range(int i){

	if (i < 0 || i > 255) {
		return 0;
	}
	
	return 1;

}