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

    int plus_petit = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }

    printf("Le plus petit élément du tableau est : %d\n", plus_petit);

    return 0;
}
