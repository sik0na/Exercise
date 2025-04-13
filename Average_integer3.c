#include <stdio.h>

int main() {
    int num;
    int sum = 0, count = 0;

    while(scanf("%d", &num) != EOF) {
        sum += num;
        count++;
    }
    printf("%.2f\n", (double)sum / count);
    return 0;
}