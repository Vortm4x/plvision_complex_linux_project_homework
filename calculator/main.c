#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "calc.h"

#define OPERATION_ADD   '+'
#define OPERATION_SUB   '-'
#define OPERATION_MUL   '*'
#define OPERATION_DIV   '/'
#define OPERATION_SQRT  'r'
#define OPERATION_FACT  'f'
#define OPERATION_QUIT  'q'


char get_operation(void);
double get_number(void);


char get_operation(void) {
    fflush(stdin);

    char operation = 0;

    printf("Chose operation\n");
    printf("\t[%c] - add\n",            OPERATION_ADD);
    printf("\t[%c] - substruct\n",      OPERATION_SUB);
    printf("\t[%c] - multiply\n",       OPERATION_MUL);
    printf("\t[%c] - fraction\n",       OPERATION_DIV);
    printf("\t[%c] - square root\n",    OPERATION_SQRT);
    printf("\t[%c] - factorial\n",      OPERATION_FACT);
    printf("\t[%c] - QUIT\n",           OPERATION_QUIT);

    printf("(operation) ");

    do {
        scanf("%c", &operation);
    }
    while (isspace(operation) != 0);

    return operation;
}

double get_number(void) {
    double number = 0.0;

    printf("Enter number: ");
    scanf("%lf", &number);

    return number;
}

int main(void) {
    bool is_running = true;

    while (is_running) {
        char operation = get_operation();

        switch (operation) {
        case OPERATION_ADD: {
            printf("(number a) ");
            double a = get_number();

            printf("(number b) ");
            double b = get_number();

            double result = calc_add(a, b);
            printf("A + B = %.9G\n", result);
        }
        break;

        case OPERATION_SUB: {
            printf("(number a) ");
            double a = get_number();

            printf("(number b) ");
            double b = get_number();

            double result = calc_sub(a, b);
            printf("A - B = %.9G\n", result);
        }
        break;

        case OPERATION_MUL: {
            printf("(number a) ");
            double a = get_number();

            printf("(number b) ");
            double b = get_number();

            double result = calc_mul(a, b);
            printf("A * B = %.9G\n", result);
        }
        break;

        case OPERATION_DIV: {
            printf("(number a) ");
            double a = get_number();

            printf("(number b) ");
            double b = get_number();

            if (b == 0) {
                printf("Error! Division by zero\n");
            } else {
                double result = calc_div(a, b);
                printf("A / B = %.9G\n", result);
            }
        }
        break;

        case OPERATION_SQRT: {
            printf("(number) ");
            double n = get_number();

            if (n < 0) {
                printf("Error! Cannot calculate square root of negative number\n");
            } else {
                double result = calc_sqrt(n);
                printf("Square root of %.9G is %.9G\n", n, result);
            }
        }
        break;

        case OPERATION_FACT: {
            printf("(number) ");
            double input = get_number();

            long long n = (long long)input;

            if (n < 0) {
                printf("Error! Cannot calculate factorial of negative number\n");
            } else if (input != (double)n) {
                printf("Error! Cannot calculate factorial of fractional number\n");
            } else {
                long long result = calc_factorial(n);
                printf("Factorial of %lld is %lld\n", n, result);
            }
        }
        break;

        case OPERATION_QUIT: {
            printf("GOODBYE!\n");
            is_running = false;
        }
        break;

        default: {
            printf("Error! Unknown operation\n");
        }
        break;
        }

        printf("\n");
    }

    return 0;
}
