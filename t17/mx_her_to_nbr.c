#include <stdio.h>
#include <stdbool.h>

static bool mx_isalpha(int c) {
if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) {
return 1;
}
else {
return 0;
}
}

static bool mx_isdigit(int c) {
if (c >= 48 && c <= 57) {
return 1;
}
else {
return 0;
}
}

static bool mx_isupper(int c) {
if ('A' <= c && c <= 'Z') {
return 1;
}
else {
return 0;
}
}

unsigned long mx_hex_to_nbr(const char *hex) {
if (hex == NULL)
	return 0;
int j = 0;
for(; hex[j] != '\0'; j++ ) {}
unsigned long result = 0;
unsigned long dec = 1;
for (int i = j - 1; i >= 0; i--) {
	if (mx_isdigit(hex[i])) {
		result += ((hex[i] - 48) * dec);
		dec *= 16;
		}
	if (mx_isalpha(hex[i])) {
		if (mx_isupper(hex[i])) {
			result += ((hex[i] - 55) * dec);
			dec *= 16;
			}
		else {
			result += ((hex[i] - 87) * dec);
			dec *= 16;
		}
	}
}
return result;
}
