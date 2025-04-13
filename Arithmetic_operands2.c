#include <stdio.h>

int main() {
    int x, y;
    char op;

    while(scanf("%d %c %d", &x, &op, &y) != EOF) {
        switch(op) {
            case '+': printf("%d\n", x + y); break;
            case '-': printf("%d\n", x - y); break;
            case '*': printf("%d\n", x * y); break;
            case '/': printf("%d\n", x / y); break;
            case '%': printf("%d\n", x % y); break;
        }
    }
    return 0;
}