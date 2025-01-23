#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define WIDTH 60
#define HEIGHT 15

void printFlag() {
    const char *message = "Sakiba";
    int msgLen = strlen(message);
    int frame = 0;

    while (1) {
        system("clear");
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                int wave = (int)(4 * sin((x + frame) * 0.2));
                if (y == HEIGHT / 2 + wave) {
                    printf("%c", message[(x + frame) % msgLen]);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        fflush(stdout);
        usleep(100000); // Delay for smooth animation
        frame++;
    }
}

int main() {
    printFlag();
    return 0;
}

