#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, moyenne_geometrique;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);

    if (a < 0 || b < 0 || c < 0) {
        printf("Les nombres doivent être positifs pour calculer une moyenne géométrique.\n");
    } else {
        moyenne_geometrique = pow((a * b * c), 1.0/3.0);
        
        printf("La moyenne géométrique est : %.2f\n", moyenne_geometrique);
    }

    return 0;
}