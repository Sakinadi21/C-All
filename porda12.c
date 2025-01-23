#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);

    int nst = n;   // Number of digits (stars) on each side
    int nsp = 1;   // Number of spaces in the middle

    // First line: sequential numbers from 1 to 2*n+1
    for (int i = 1; i <= 2 * n + 1; i++) {
        printf("%d", i);
    }
    printf("\n");

    // Remaining lines
    for (int i = 1; i <= n; i++) {
        int a = 1;  // Starting number for the first half

        // First set of numbers
        for (int j = 1; j <= nst; j++) {
            printf("%d", a);
            a++;
        }

        // Spaces in the middle
        for (int k = 1; k <= nsp; k++) {
            printf(" ");
        }

        // Second set of numbers: start from 2*n + 2 - nst
        int b = 2 * n + 2 - nst;
        for (int j = 1; j <= nst; j++) {
            printf("%d", b);
            b++;
        }

        // Update counts for the next row
        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}
