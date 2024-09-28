#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n];
    int somme = 0;

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i];
    }

    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}