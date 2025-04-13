#include <stdio.h>

int main(void) {
    int num;
    int sum =0, count = 0;

    while(scanf("%d", &num) == 1) {
        if (num == 0) {
            break;
        }
        sum += num;
        count++;
    }
    if (count > 0) {
        printf("%.2f\n", (double)sum/count);
    
    } else{
        printf("No");
    }
    return 0;
    
}