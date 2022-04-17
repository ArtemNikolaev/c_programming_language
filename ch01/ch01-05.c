//https://github.com/ArtemNikolaev/c_programming_language/issues/3
#include <stdio.h>

#define LOWER 0
#define MAX 300
#define STEP 20

int main() {
    int fahr;
    float celsius;

    printf("┌────┬───────┐\n");
    printf("│fahr│celsius│\n");
    printf("├────┼───────┤\n");

    for (fahr = MAX; fahr >= LOWER; fahr -= STEP) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("│%4d│%7.1f│\n", fahr, celsius);
    }

    printf("└────┴───────┘\n");

    return 0;
}
