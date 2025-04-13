#include <stdio.h>

int main() {
    int a, b, c, d;

    while(1) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        } else {
            int left = a * d;
            int right = b * c;
            
            if (left > right) {
                printf("%s\n", ">");
            } else if (left < right) {
                printf("%s\n", "<");
            } else {
                printf("%s\n", "=");
            }
        }
    }
    return 0;
}