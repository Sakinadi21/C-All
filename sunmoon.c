#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define WIDTH 80
#define HEIGHT 25

void printSunAndMoon(const char *boyName, const char *girlName, int frame) {
    int boyLen = strlen(boyName);
    int girlLen = strlen(girlName);

    system("clear"); // Clear the screen for each frame

    for (int y = -HEIGHT / 2; y <= HEIGHT / 2; y++) {
        for (int x = -WIDTH / 2; x <= WIDTH / 2; x++) {
            float distance = sqrt(x * x + y * y); // Distance from the center

            // Sun's inner circle with the boy's name
            if (distance > 5 && distance < 8 && x < 0) {
                int index = (frame + x + WIDTH / 2) % boyLen;
                printf("%c", boyName[index]);
            }
            // Sun's rays
            else if ((distance > 8 && distance < 11) &&
                     ((frame % 12 == 0 && x % 3 == 0) || (frame % 6 == 0 && y % 3 == 0))) {
                printf("*");
            }
            // Moon's inner circle with the girl's name (attached on the right)
            else if (distance > 5 && distance < 8 && x > 0) {
                int index = (frame + x + WIDTH / 2) % girlLen;
                printf("%c", girlName[index]);
            }
            // Background space
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    char boyName[20], girlName[20];
    printf("Enter the boy's name (Sun): ");
    scanf("%s", boyName);
    printf("Enter the girl's name (Moon): ");
    scanf("%s", girlName);

    int frame = 0;

    while (1) {
        printSunAndMoon(boyName, girlName, frame);
        usleep(100000); // Add delay for animation effect
        frame++;
    }

    return 0;
}

