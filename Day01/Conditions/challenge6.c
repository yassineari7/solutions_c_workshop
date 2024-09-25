#include <stdio.h>

int main() {
    int nombre;
    printf("Entrez le nombre ici : ");
    scanf("%d", &nombre);
    
    if (nombre < 0) {
        printf("Le nombre est négatif.\n");
      } else if (nombre > 0) {
        printf("Le nombre est positif.\n");
        } else {
             printf("Le nombre est zéro.\n");
    }

    return 0;
}