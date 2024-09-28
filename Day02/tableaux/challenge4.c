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

    int plus_grand = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
    }

    printf("Le plus grand élément du tableau est : %d\n", plus_grand);

    return 0;
}