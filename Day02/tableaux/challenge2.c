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

    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}