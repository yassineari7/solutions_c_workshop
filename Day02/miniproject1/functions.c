#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Variables.c"
#include "./Headers/functions.h"

void afficherLivreDetails(int index) {
    printf("Titre : %s\n", titre[index]);
    printf("Auteur : %s\n", auteur[index]);
    printf("Prix : %.2f\n", prix[index]);
    printf("Quantite : %d\n", quantite[index]);
    printf("\n");
}

void Afficher() {
    system("cls");
    if (nbrTotale == 0) {
        printf("Pas de livres dans le stock.\n");
    } else {
        printf("===================== Afficher Le Stock ======================\n");
        for (int i = 0; i < nbrTotale; i++) {
            afficherLivreDetails(i);
        }
    }
}

void Ajout() {
    system("cls");
    int ajout;
    printf("Entrer le nombre de livres à ajouter : ");
    scanf("%d", &ajout);
    printf("====================== Ajout =====================\n");
    for (int i = nbrTotale; i < nbrTotale + ajout; i++) {
        printf("Titre : ");
        scanf(" %[^\n]", titre[i]);
        printf("Auteur : ");
        scanf(" %[^\n]", auteur[i]);
        printf("Prix : ");
        scanf("%f", &prix[i]);
        printf("Quantite : ");
        scanf("%d", &quantite[i]);
        printf("\n");
    }
    nbrTotale += ajout;
    printf("%d livre(s) ajouté(s) avec succès.\n", ajout);
}

void Rechercher() {
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Chercher Un Livre ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);
    for (int i = 0; i < nbrTotale; i++) {
        if (strcasecmp(titre[i], chercher) == 0) {
            system("cls");
            printf("---------- Livre est Trouvé ----------\n");
            afficherLivreDetails(i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Livre pas trouvé.\n");
}

void Modifier() {
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Modifier Un Livre ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);
    for (int i = 0; i < nbrTotale; i++) {
        if (strcasecmp(titre[i], chercher) == 0) {
            system("cls");
            printf("---------- Livre est Trouvé ----------\n");
            afficherLivreDetails(i);
            found = 1;
            printf("===================== Modification ======================\n");
            int mod;
            printf("Donnez la nouvelle quantité : ");
            scanf("%d", &mod);
            quantite[i] = mod;
            printf("Quantité mise à jour avec succès.\n");
            break;
        }
    }
    if (!found)
        printf("Livre pas trouvé.\n");
}

void Supprimer() {
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Suppression ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);
    for (int i = 0; i < nbrTotale; i++) {
        if (strcasecmp(titre[i], chercher) == 0) {
            found = 1;
            for (int j = i; j < nbrTotale - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            nbrTotale--;
            printf("Livre supprimé avec succès.\n");
            break;
        }
    }
    if (!found)
        printf("Livre pas trouvé.\n");
}

void Totale() {
    system("cls");
    printf("Le nombre total des livres est : %d\n", nbrTotale);
}