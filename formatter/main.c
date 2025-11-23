#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lower.h"
#include "upper.h"


#define OPTION_UPPER "upper"
#define OPTION_LOWER "lower"
#define OPTION_HELP "help"
#define MAX_INPUT_SIZE 8192

void print_help(const char *prog_name); 


void print_help(const char *prog_name) 
{
    printf("Usage: %s {%s|%s|%s}\n", prog_name, OPTION_UPPER, OPTION_LOWER, OPTION_HELP);
    printf("Options:\n");
    printf("  %s    Convert input string to uppercase.\n", OPTION_UPPER);
    printf("  %s    Convert input string to lowercase.\n", OPTION_LOWER);
    printf("  %s    Display this help message.\n", OPTION_HELP);
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        print_help(argv[0]);
        return EXIT_FAILURE;
    }

    char input[MAX_INPUT_SIZE];

    if (strcmp(argv[1], OPTION_HELP) == 0) {
        print_help(argv[0]);
        return EXIT_SUCCESS;
    } else
    if (strcmp(argv[1], OPTION_UPPER) == 0) {
        fgets(input, MAX_INPUT_SIZE, stdin);
        convert_to_upper(input);
        printf("%s", input);
    } else
    if (strcmp(argv[1], OPTION_LOWER) == 0) {
        fgets(input, MAX_INPUT_SIZE, stdin);
        convert_to_lower(input);
        printf("%s", input);
    } else {
        fprintf(stderr, "Unknown option: %s\n Use \"help\" to get option list\n", argv[1]);
        return EXIT_FAILURE;
    }

    return 0;
}
