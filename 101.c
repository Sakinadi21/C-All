#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    int num = 1;  // Start with number 1

    for (int i = 1; i <= n; i++) {
            if(i%2 !=0) num=1;
    else num = 0;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);  // Print the current number
            if (num == 0) num =1;
            else num = 0;
        }
        printf("\n");
    }

    return 0;
}

