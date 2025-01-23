#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 25

void printMatrixRain() {
    char characters[] = "Onuborton";
    int charLen = sizeof(characters) - 1;

    while (1) {
        for (int i = 0; i < WIDTH; i++) {
            if (rand() % 10 < 2) {
                printf("%c", characters[rand() % charLen]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
        usleep(50000); // Adds delay for the effect
    }
}

int main() {
    srand(time(0));
    system("clear"); // Clears the terminal
    printMatrixRain();
    return 0;
}
