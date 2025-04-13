#include <stdio.h>

int main() {
    int score;
    while (1) {
        scanf("%d", &score);
        if (score < 0) {
            break;
        }
        if (score >= 80) {
            printf("jeles\n");
        } else if (score >= 70) {
            printf("jo\n");
        } else if (score >= 60) {
            printf("kozepes\n");
        } else if (score >= 50) {
            printf("elegseges\n");
        } else {
            printf("elegtelen\n");
        }
    }
    return 0;
}
