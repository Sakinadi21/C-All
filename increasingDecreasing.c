#include<stdio.h>

// Function to print numbers in increasing order
void increasing(int x, int n) {
    if (x > n) return; // Base case
    printf("%d\n", x);
    increasing(x + 1, n); // Recursive call to print the next number
}

// Function to print numbers in decreasing order
void decreasing(int n) {
    if (n < 1) return; // Base case
    printf("%d\n", n);
    decreasing(n - 1); // Recursive call to print the previous number
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers in increasing order
    increasing(1, n);

    // Print numbers in decreasing order
    decreasing(n);

    return 0;
}
