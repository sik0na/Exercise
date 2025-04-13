#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    while( y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    if (x == 1) {
        printf("IGEN\n");
    } else {
        printf("NEM\n");
    }
    return 0;

}