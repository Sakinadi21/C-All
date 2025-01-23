#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    // Ensuring the number of rows is odd for symmetry
    if (n % 2 == 0) {
        n++; // Make n odd if it's even
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' in the middle column or middle row
            if (j == n / 2 + 1 || i == n / 2 + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

