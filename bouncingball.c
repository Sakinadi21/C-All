#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 40
#define HEIGHT 15

void printBouncingBall() {
    int x = 0, y = 0;
    int dx = 1, dy = 1;

    while (1) {
        system("clear");

        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x) {
                    printf("O");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        x += dx;
        y += dy;

        if (x <= 0 || x >= WIDTH - 1) dx = -dx;
        if (y <= 0 || y >= HEIGHT - 1) dy = -dy;

        usleep(100000);
    }
}

int main() {
    printBouncingBall();
    return 0;
}

