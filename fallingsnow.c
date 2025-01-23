#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 40
#define HEIGHT 15

void printSnowfall() {
    char snow[HEIGHT][WIDTH] = {0};
    while (1) {
        system("clear");

        // Add new snowflakes at the top
        for (int i = 0; i < WIDTH; i++) {
            if (rand() % 10 < 2) {
                snow[0][i] = '*';
            } else {
                snow[0][i] = ' ';
            }
        }

        // Shift snowflakes down
        for (int i = HEIGHT - 1; i > 0; i--) {
            for (int j = 0; j < WIDTH; j++) {
                snow[i][j] = snow[i - 1][j];
            }
        }

        // Print snow
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                printf("%c", snow[i][j]);
            }
            printf("\n");
        }

        usleep(200000);
    }
}

int main() {
    srand(time(0));
    printSnowfall();
    return 0;
}

