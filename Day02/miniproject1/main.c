#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.c"

int main() {
    int choix;

    do {
        system("cls");
        printf("============================================");
        printf("\nMenu: \n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Rechercher et supprimer un livre\n");
        printf("6. Afficher nombre total des livres\n");
        printf("7. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: 
                Ajout();
                break;

            case 2: 
                Afficher();
                break;

            case 3: 
                Rechercher();
                break;

            case 4: 
                Modifier();
                break;

            case 5: 
                Supprimer();
                break;

            case 6: 
                Totale();
                break;

            case 7:
                printf("Merci d'utiliser le programme. Au revoir!\n");
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }

        printf("Appuyez sur une touche pour continuer...\n");
        getchar(); // Pour attendre l'entrée de l'utilisateur
        getchar(); // Pour consommer le newline restant après scanf

    } while (choix != 7);

    return 0;
}