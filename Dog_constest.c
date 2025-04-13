#include <stdio.h>

int main(void) {
    int heads, legs;
    
    
    while (scanf("%d %d", &heads, &legs) != EOF) {
        
        if (legs < 2 * heads || heads <= 0) {
            printf("Invalid input\n");
            continue;
        }
        
       
        int dogs = (legs - 2 * heads) / 2;
        int people = heads - dogs;
        
        
        printf("%d %d\n", people, dogs);
    }

    return 0;
}
