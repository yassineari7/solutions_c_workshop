#include <stdio.h>

int main() {
    float a, b;

    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre (b) : ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    
    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Erreur : Division par zéro\n");
    }

    return 0;
}
