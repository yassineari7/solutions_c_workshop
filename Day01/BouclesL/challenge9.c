#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        printf("Somme des chiffres = %d\n", sum);
    }
    return 0;
}