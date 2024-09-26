#include <stdio.h>

int main() {
    float revenuAnnuel;
    int scoreCredit, dureePret;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenuAnnuel);

    printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &scoreCredit);

    printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &dureePret);

    if (revenuAnnuel >= 30000 && scoreCredit >= 700 && dureePret <= 10) {
        printf("Éligible pour un prêt.\n");
    } else if (revenuAnnuel >= 30000 && scoreCredit >= 650 && dureePret <= 15) {
        printf("Éligible avec conditions.\n");
    } else {
        printf("Non éligible pour un prêt.\n");
    }

    return 0;
}