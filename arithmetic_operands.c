#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    for( int i=0; i<num; i++) {
        int x, y;
        char op;
        scanf("%d %c %d", &x, &op, &y);
        switch (op) {
            case '+': printf("%d\n", x + y); break;
            case '-': printf("%d\n", x - y); break;
            case '*': printf("%d\n", x * y); break;
            case '/': printf("%d\n", x / y); break;
            case '%': printf("%d\n", x % y); break;
        }
    }
    return 0;
}
