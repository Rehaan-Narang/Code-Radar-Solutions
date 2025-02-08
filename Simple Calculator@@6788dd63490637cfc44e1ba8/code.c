#include <stdio.h>

int main() {
    int x, y;
    char z;  // Change z to char for operator input

    scanf("%d %d %c", &x, &y, &z);  // Use %c for character input

    if (z == '+') {
        printf("%d\n", x + y);
    }
    else if (z == '-') {
        printf("%d\n", x - y);
    }
    else if (z == '*') {
        printf("%d\n", x * y);
    }
    else if (z == '/') {
        if (y != 0) {
            printf("%d\n", x / y);
        } else {
            printf("Error! Division by zero.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
