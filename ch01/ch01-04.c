//https://github.com/ArtemNikolaev/c_programming_language/issues/4
#include <stdio.h>

int main() {
    int celsius;
    float fahr;

    printf("┌───────┬──────┐\n");
    printf("│celsius│ fahr │\n");
    printf("├───────┼──────┤\n");

    for (celsius = 0; celsius <= 300; celsius += 20) {
        fahr =celsius / (5.0/9.0) + 32;
        printf("│%7d│%6.1f│\n", fahr, celsius);
    }


    printf("└───────┴──────┘\n");

    return 0;
}
