#include <stdio.h>

int main() {
    int choix;
    double annees, mois, jours, heures, minutes, secondes;

    printf("Entrez le nombre d'années : ");
    scanf("%lf", &annees);

    printf("\nSélectionnez une option de conversion :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");

    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annees * 12;
            printf("%.2lf années équivalent à %.2lf mois.\n", annees, mois);
            break;
        case 2:
            jours = annees * 365;
            printf("%.2lf années équivalent à %.2lf jours.\n", annees, jours);
            break;
        case 3:
            heures = annees * 365 * 24;
            printf("%.2lf années équivalent à %.2lf heures.\n", annees, heures);
            break;
        case 4:
            minutes = annees * 365 * 24 * 60;
            printf("%.2lf années équivalent à %.2lf minutes.\n", annees, minutes);
            break;
        case 5:
            secondes = annees * 365 * 24 * 60 * 60;
            printf("%.2lf années équivalent à %.2lf secondes.\n", annees, secondes);
            break;
        default:
            printf("Choix invalide. Veuillez sélectionner un nombre entre 1 et 5.\n");
            break;
    }

    return 0;
}
