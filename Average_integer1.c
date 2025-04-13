#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    double average = 0.0; // Declare average outside the loop
    int sum = 0; // Declare sum outside the loop

    for(int i = 0; i < num; i++) {
        int n;

        scanf("%d", &n);
        sum += n;
    }
    average = (double)sum / num; // Calculate average after the loop
    printf("%.2f\n", average);
    return 0;
}