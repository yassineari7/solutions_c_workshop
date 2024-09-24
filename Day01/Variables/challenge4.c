#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("La vitesse en mètres par seconde (m/s) est : %.2f\n", ms);

    return 0;
}
