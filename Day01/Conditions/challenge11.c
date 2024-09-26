#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char* joursDeLaSemaine[] = {
        "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"
    };
    
    srand(time(NULL));
    int indexAleatoire = rand() % 7;
    
    printf("Jour aléatoire de la semaine: %s\n", joursDeLaSemaine[indexAleatoire]);

    return 0;
}