#include <stdio.h>

int main() {
    int score;
    
    while(scanf("%d", &score) != EOF) {
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