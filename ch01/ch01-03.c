//https://github.com/ArtemNikolaev/c_programming_language/issues/3
#include <stdio.h>

int main() {
    int fahr;
    float celsius;

    printf("┌────┬───────┐\n");
    printf("│fahr│celsius│\n");
    printf("├────┼───────┤\n");

    for (fahr = 0; fahr <= 300; fahr += 20) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("│%4d│%7.1f│\n", fahr, celsius);
    }

    printf("└────┴───────┘\n");

    return 0;
}
