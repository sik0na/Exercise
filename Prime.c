#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if(num <= 1 ) {
        printf("NEM\n");
        return 0;
    } else {
        for(int i= 2; i < num; i++) {
            if (num % i == 0) {
                printf("NEM\n");
                return 0;
            } 
        }
        printf("IGEN\n");
    }
    
    return 0;
}