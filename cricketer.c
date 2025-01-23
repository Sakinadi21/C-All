#include <stdio.h>
#include <string.h>

int main() {
    typedef struct cricketer {
        char name[15];
        int age;
        int noOfMatches;
        float average;
    } cricketer;

    // 3 cricketers
    cricketer arr[3];

    // Input cricketer details
    for (int i = 0; i < 3; i++) {
        printf("Enter name for cricketer %d: ", i + 1);
        scanf("%s", arr[i].name); // If names can include spaces, use fgets instead

        printf("Enter age for cricketer %d: ", i + 1);
        scanf("%d", &arr[i].age);

        printf("Enter number of matches played by cricketer %d: ", i + 1);
        scanf("%d", &arr[i].noOfMatches);

        printf("Enter average score for cricketer %d: ", i + 1);
        scanf("%f", &arr[i].average);
    }

    // Output cricketer details
    printf("\nCricketer Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Number of matches played: %d\n", arr[i].noOfMatches);
        printf("Average: %.2f\n\n", arr[i].average);
    }

    return 0;
}
