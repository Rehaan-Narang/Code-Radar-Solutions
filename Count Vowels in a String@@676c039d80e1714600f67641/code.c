#include <stdio.h>
#include <string.h>
#include <ctype.h> // For the tolower function

int main() {
    char str[100];
    int i, count = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string input from the user

    // Iterate through the string and count vowels using if-else
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase to handle case insensitivity
        if (ch == 'a') {
            count++;
        } else if (ch == 'e') {
            count++;
        } else if (ch == 'i') {
            count++;
        } else if (ch == 'o') {
            count++;
        } else if (ch == 'u') {
            count++;
        }
    }

    // Print the result
    printf("%d", count);

    return 0;
}
