#include "calc.h"


double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}

double sqrt(double n) {
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

long long factorial(long long n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}
