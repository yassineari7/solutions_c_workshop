#include <stdio.h>

int main() {
    int n, i;

    printf("How many elements in the array? ");
    scanf("%d", &n);

    int originalArray[n], copiedArray[n];

    printf("Enter the %d elements of the original array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &originalArray[i]);
    }

    for (i = 0; i < n; i++) {
        copiedArray[i] = originalArray[i];
    }

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    printf("Copied array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", copiedArray[i]);
    }
    printf("\n");

    return 0;
}