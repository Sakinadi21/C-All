#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateEmoji() {
    char eyes[] = {':', ';', '=', '8'};
    char noses[] = {'-', '~', 'o', ' '};
    char mouths[] = {')', '(', 'D', 'P', '|'};

    printf("%c%c%c\n", eyes[rand() % 4], noses[rand() % 4], mouths[rand() % 5]);
}

int main() {
    srand(time(0));
    printf("Here are some random emoji faces:\n");
    for (int i = 0; i < 10; i++) {
        generateEmoji();
    }
    return 0;
}

