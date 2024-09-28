#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Le tableau trié en ordre croissant est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}