#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char op;

    while(1) {
        if(scanf("%d %c %d", &x, &op, &y) != 3) {
            break;
        }

        if (x == 0 || y == 0) {
            break;
        }
        switch(op) {
            case '+': printf("%d\n", x + y); break;
            case '-': printf("%d\n", x - y); break;
            case '*': printf("%d\n", x * y); break;
            case '/': 
                if (y != 0) {
                    printf("%d\n", x / y);
                } else {
                    printf("Division by zero error\n");
                }
                break;
            case '%': 
                if (y != 0) {
                    printf("%d\n", x % y);
                } else {
                    printf("Division by zero error\n");
                }
                break;
            default: 
                printf("Invalid operator\n");
        }
    }
    return EXIT_SUCCESS;
}