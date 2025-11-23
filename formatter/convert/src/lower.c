#include "lower.h"
#include <ctype.h>

void convert_to_lower(char *str) {
    while (*str != '\0') {
        *str = tolower(*str);
        str++;
    }   
}
