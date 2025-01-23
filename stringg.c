#include <stdio.h>

int main() {
    char str[20] = "Sbkiba Belal";
    str[1] = 'a';
    int i = 0;

    while (str[i] != '\0') { // Loop until the null terminator
        printf("%c", str[i]); // Print each character
        i++;
    }

    return 0;
}

