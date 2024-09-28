#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        printf("La somme des %d premiers entiers naturels est %d.\n", n, sum);
    }

    return 0;
}