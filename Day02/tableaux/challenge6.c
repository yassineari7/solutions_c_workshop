#include <stdio.h>

int main() {
    int n, facteur;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++) {
        tableau[i] = tableau[i] * facteur;
    }

    printf("Le tableau après multiplication est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}