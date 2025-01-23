#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    int num = 1;  // Start with number 1

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);  // Print the current number
            num += 2;  // Increment by 2 to get the next odd number
        }
        printf("\n");
    }

    return 0;
}
