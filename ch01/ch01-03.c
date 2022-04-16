//https://github.com/ArtemNikolaev/c_programming_language/issues/3
#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    celsius = lower;
    printf("┌────┬───────┐\n");
    printf("│fahr│celsius│\n");
    printf("├────┼───────┤\n");
    while (celsius <= upper) {
        fahr = celsius / (5.0/9.0) + 32;
        printf("│%7.0f│%6.1f│\n", celsius, fahr);
        celsius += step;
    }
    printf("└────┴───────┘\n");

    return 0;
}
