#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int invertedArr[n];

    for (int i = 0; i < n; i++) {
        invertedArr[i] = arr[n - 1 - i];
    }

    printf("Tableau inversé :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", invertedArr[i]);
    }
    printf("\n");

    return 0;
}