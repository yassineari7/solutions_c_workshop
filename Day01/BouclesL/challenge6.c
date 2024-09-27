#include <stdio.h>

int main() {
    int n;
    int currentEven = 2;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d", currentEven);
        if (i < n - 1) {
            printf(", ");
        }
        currentEven += 2;
    }

    printf("\n");
    return 0;
}