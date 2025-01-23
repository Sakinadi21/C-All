#include <stdio.h>
void insertElement(int arr[], int n, int pos, int element) {
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = element;
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5, pos = 3, element = 10;
    insertElement(arr, n, pos, element);
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
