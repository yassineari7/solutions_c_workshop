#include <stdio.h>

int main() {
    int n;
    int currentOdd = 1;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d", currentOdd);
        if (i < n - 1) {
            printf(", ");
        }
        currentOdd += 2;
    }

    printf("\n");
    return 0;
}