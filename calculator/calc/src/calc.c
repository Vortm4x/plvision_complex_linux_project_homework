#include "calc.h"


double calc_add(double a, double b) {
    return a + b;
}

double calc_sub(double a, double b) {
    return a - b;
}

double calc_mul(double a, double b) {
    return a * b;
}

double calc_div(double a, double b) {
    return a / b;
}

double calc_sqrt(double n) {
    double x = n;
    double r;

    int count = 0;

    while (1) {
        count++;

        r = 0.5 * (x + (n / x));

        if (r == x) {
            break;
        }

        x = r;
    }

    return r;
}

long long calc_factorial(long long n) {
    if (n == 0) {
        return 1;
    }

    return n * calc_factorial(n - 1);
}
