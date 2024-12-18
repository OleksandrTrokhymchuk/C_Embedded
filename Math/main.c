#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getInputA() {
    double input;
    printf("Enter value for A:");
    scanf("%lf", &input);
    return input;
}

double calculateZ1(double a) {
    return pow(cos(3*M_PI/8 - a/4), 2) - pow(cos(11*M_PI/8 + a/4), 2);
}

double calculateZ2(double a) {
    return (sqrt(2)/2) * sin(a/2);
}

int main() {
    double a, z1, z2;

    a = getInputA();

    z1 = calculateZ1(a);
    printf("Value of Z1: %f\n", z1);

    z2 = calculateZ2(a);
    printf("Value of Z2: %f\n", z2);

    return 0;
}
