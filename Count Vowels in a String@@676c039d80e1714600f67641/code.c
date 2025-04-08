#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input from the user

    // Iterate through the string and count vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for uniformity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    // Print the result
    printf("%d", count);

    return 0;
}
