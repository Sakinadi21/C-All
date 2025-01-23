#include <stdio.h>

int main() {
    char str[40];

    puts("Enter a string:");
    fgets(str, sizeof(str), stdin); // Use fgets to safely read the string, including spaces

    // Remove newline character if present
    int size = 0;
    while (str[size] != '\0') {
        if (str[size] == '\n') {
            str[size] = '\0';
            break;
        }
        size++;
    }

    // Reverse the string
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts("The reversed string is:");
    puts(str);

    return 0;
}
