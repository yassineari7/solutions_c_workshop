#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int nombre1, nombre2, max;

    printf("Entrez le premier nombre: ");
    scanf("%d", &nombre1);
    
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &nombre2);

    max = maximum(nombre1, nombre2);

    printf("Le maximum entre %d et %d est: %d\n", nombre1, nombre2, max);

    return 0;
}