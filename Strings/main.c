#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertUnsignedIntToString(unsigned int number, char* result) {
    int index = 0;

    if (number == 0) {
        result[index++] = '0';
        result[index] = '\0';
        return;
    }

    while (number > 0) {
        result[index++] = (number % 10) + '0';
        number /= 10;
    }
    result[index] = '\0';

    for (int start = 0, end = index - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main() {
    unsigned int number;
    char stringRepresentation[20];

    printf("Enter an unsigned integer:");
    scanf("%u", &number);
    convertUnsignedIntToString(number, stringRepresentation);
    printf("Number as a string: %s\n", stringRepresentation);

    return 0;
}
