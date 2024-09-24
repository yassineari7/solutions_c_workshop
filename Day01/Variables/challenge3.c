#include <stdio.h>

int main() {
    float kilometres, yards;

    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &kilometres);

    yards = kilometres * 1093.61;

    printf("La distance en yards est : %.2f\n", yards);

    return 0;
}
