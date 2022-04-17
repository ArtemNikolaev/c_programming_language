//https://github.com/ArtemNikolaev/c_programming_language/issues/6
#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
