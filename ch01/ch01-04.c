#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("┌───────┬──────┐\n");
    printf("│celsius│ fahr │\n");
    printf("├───────┼──────┤\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("│%7.0f│%6.1f│\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("└───────┴──────┘\n");

    return 0;
}
