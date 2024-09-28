#include <stdio.h>

int main() {
    int n;

    printf("Combien de termes de la suite de Fibonacci souhaitez-vous (n)?: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else if (n == 1) {
        printf("Terme de Fibonacci : 0\n");
    } else {
        int t0 = 0, t1 = 1, suivant;

        printf("Termes de Fibonacci : %d, %d", t0, t1);

        for (int i = 2; i < n; i++) {
            suivant = t0 + t1;
            printf(", %d", suivant);
            t0 = t1;
            t1 = suivant;
        }

        printf("\n");
    }

    return 0;
}