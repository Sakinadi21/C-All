#include<stdio.h>

int main() {
    FILE* ptr = fopen("champ.txt", "r");
    if (ptr == NULL) { // Check if the file was successfully opened
        printf("Failed to open the file.\n");
        return 1; // Exit with an error code
    }

    char str[100];
    if (fgets(str, 100, ptr) != NULL) { // Read a line from the file
        printf("%s", str);
    }

    fclose(ptr); // Close the file
    return 0;
}
