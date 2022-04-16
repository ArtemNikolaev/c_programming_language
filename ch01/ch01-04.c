//https://github.com/ArtemNikolaev/c_programming_language/issues/4
#include <stdio.h>

#define LOWER 0
#define MAX 300
#define STEP 20

int main() {
    int celsius;
    float fahr;

    printf("┌───────┬──────┐\n");
    printf("│celsius│ fahr │\n");
    printf("├───────┼──────┤\n");

    for (celsius = LOWER; celsius <= MAX; celsius += STEP) {
        fahr =celsius / (5.0/9.0) + 32;
        printf("│%7d│%6.1f│\n", fahr, celsius);
    }


    printf("└───────┴──────┘\n");

    return 0;
}
