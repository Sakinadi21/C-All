
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name1[50], name2[50];
    printf("Enter your name: ");
    fgets(name1, sizeof(name1), stdin);
    printf("Enter your crush's name: ");
    fgets(name2, sizeof(name2), stdin);

    srand(time(0));
    int lovePercentage = rand() % 101; // Generate a random number between 0 and 100

    printf("\nCalculating love percentage...\n");
    printf("Love between %s and %s is: %d%%\n", name1, name2, lovePercentage);

    if (lovePercentage > 80) {
        printf("You're a perfect match!\n");
    } else if (lovePercentage > 50) {
        printf("Things look promising!\n");
    } else {
        printf("Maybe just stay friends? :)\n");
    }

    return 0;
}
