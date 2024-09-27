#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur: La factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d! = %lld\n", n, factorial);
    }

    return 0;
}
