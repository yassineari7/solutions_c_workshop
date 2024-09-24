#include <stdio.h>

int main() {
    float celsius;

    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    if (celsius < 0) {
        printf("À %.2f°C, l'état de l'eau est : Solide\n", celsius);
    } else if (celsius >= 0 && celsius < 100) {
        printf("À %.2f°C, l'état de l'eau est : Liquide\n", celsius);
    } else {
        printf("À %.2f°C, l'état de l'eau est : Gaz\n", celsius);
    }

    return 0;
}