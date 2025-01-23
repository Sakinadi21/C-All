#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

#define WIDTH 80
#define HEIGHT 25

void printHeart() {
    const char *message = "Sakiba";
    int msgLen = strlen(message);
    int frame = 0;

    while (1) {
        system("clear"); // Clear the screen for each frame

        for (int y = HEIGHT / 2; y >= -HEIGHT / 4; y--) {
            for (int x = -WIDTH / 2; x <= WIDTH / 2; x++) {
                // Heart equation to create the shape
                float part1 = pow((x * 0.06), 2) + pow((y * 0.1), 2) - 1;
                if (part1 * part1 * part1 - pow(x * 0.06, 2) * pow(y * 0.1, 3) <= 0.0) {
                    // Add the animated message within the heart
                    if ((frame / 3 + x + WIDTH / 2) % msgLen == 0) {
                        printf("%c", message[(frame / 3 + x + WIDTH / 2) % msgLen]);
                    } else {
                        printf("*");
                    }
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        fflush(stdout);   // Flush the output for real-time animation
        usleep(100000);   // Delay for animation effect
        frame++;
    }
}

int main() {
    system("clear"); // Clear the screen initially
    printHeart();    // Start the heart animation
    return 0;
}
