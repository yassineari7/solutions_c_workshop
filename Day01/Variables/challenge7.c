#include <stdio.h>

int main() {
    float num1, num2, num3;
    float moyenne_ponderee;

    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &num2);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &num3);

    moyenne_ponderee = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10;

    printf("La moyenne pondérée est : %.2f\n", moyenne_ponderee);

    return 0;
}
