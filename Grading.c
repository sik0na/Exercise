#include <stdio.h>

int main() {
    int student;
    scanf("%d", &student);
    for (int i = 0; i < student; i++) {
        int score;
        scanf("%d", &score);
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
