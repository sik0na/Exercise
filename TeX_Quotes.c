#include <stdio.h>

int main() {
    int c;
    int open_quote = 1; // 1 means next " is opening

    while ((c = getchar()) != EOF) {
        if (c == '"') { // Check for a double quote character
            if (open_quote) {
                printf("`");
            } else {
                printf("'");
            }
            open_quote = !open_quote; // Toggle the open_quote flag
        } else {
            putchar(c); // Print the character as is
        }
    }

    return 0;
}