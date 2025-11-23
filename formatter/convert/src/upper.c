#include "upper.h"
#include <ctype.h>

void convert_to_upper(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }   
}
