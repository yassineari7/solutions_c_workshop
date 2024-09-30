#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100  // Maximum number of books

// Fonction li katzyid lktab l stock
void ajouterLivre(char livres[MAX_BOOKS][4][100], int *nombreLivres) {
    if (*nombreLivres >= MAX_BOOKS) {  // Katchouf ila l stock mlian
        printf("Stock is full!\n");  // Stock is full
        return;
    }
    printf("Enter the book title: ");  // Enter book title
    scanf(" %[^\n]%*c", livres[*nombreLivres][0]);  // Qra titre dyal lktab
    printf("Enter the author: ");  // Enter book author
    scanf(" %[^\n]%*c", livres[*nombreLivres][1]);  // Qra author dyal lktab
    printf("Enter the price: ");  // Enter book price
    scanf(" %[^\n]%*c", livres[*nombreLivres][2]);  // Qra price dyal lktab
    printf("Enter the quantity: ");  // Enter book quantity
    scanf(" %[^\n]%*c", livres[*nombreLivres][3]);  // Qra quantity dyal lktab
    
    (*nombreLivres)++;  // Ziyad lnombre dyal lktoub
    printf("Book added successfully!\n");  // Book added successfully
}

// Fonction li kat3rdi kolchi lktoub li kaynin
void afficherLivres(char livres[MAX_BOOKS][4][100], int nombreLivres) {
    if (nombreLivres == 0) {  // Katchouf ila makaynch lktab
        printf("No books in stock.\n");  // No books in stock
        return;
    }
    printf("Available books:\n");  // Display available books
    for (int i = 0; i < nombreLivres; i++) {  // Loop through the books
        // Print book details
        printf("Title: %s, Author: %s, Price: %s, Quantity: %s\n", 
               livres[i][0], livres[i][1], livres[i][2], livres[i][3]);
    }
}

// Fonction li kat9lb 3la ktab b smito
void rechercherLivre(char livres[MAX_BOOKS][4][100], int nombreLivres) {
    char titreRecherche[100];  // Variable li katkhfi smit lktab
    printf("Enter the title of the book you are looking for: ");  // Enter book title to search
    scanf(" %[^\n]%*c", titreRecherche);  // Qra smit lktab li katqleb 3lih

    for (int i = 0; i < nombreLivres; i++) {  // Loop through the books
        if (strcmp(livres[i][0], titreRecherche) == 0) {  // Qcompar l titres
            // Print book found
            printf("Book found: Title: %s, Author: %s, Price: %s, Quantity: %s\n", 
                   livres[i][0], livres[i][1], livres[i][2], livres[i][3]);
            return;
        }
    }
    printf("This book is not in stock.\n");  // Book not found
}

// Fonction li katbdel lquantité dyal lktab
void mettreAJourQuantite(char livres[MAX_BOOKS][4][100], int nombreLivres) {
    char titreRecherche[100];  // Variable li katkhfi smit lktab
    printf("Enter the title of the book you want to update the quantity for: ");  // Enter book title to update quantity
    scanf(" %[^\n]%*c", titreRecherche);  // Qra smit lktab li bghiti tbaddal lquantité

    for (int i = 0; i < nombreLivres; i++) {  // Loop through the books
        if (strcasecmp(livres[i][0], titreRecherche) == 0) {  // Qcompar l titres
            printf("Enter the new quantity: ");  // Enter new quantity
            scanf(" %[^\n]%*c", livres[i][3]);  // Qra lquantité jdida
            printf("Quantity updated successfully!\n");  // Quantity updated successfully
            return;
        }
    }
    printf("This book is not in stock.\n");  // Book not found
}

// Fonction li kat7yed lktab mn stock
void supprimerLivre(char livres[MAX_BOOKS][4][100], int *nombreLivres) {
    char titreRecherche[100];  // Variable li katkhfi smit lktab
    printf("Enter the title of the book you want to remove: ");  // Enter book title to remove
    scanf(" %[^\n]%*c", titreRecherche);  // Qra smit lktab li bghiti t7iyd

    for (int i = 0; i < *nombreLivres; i++) {  // Loop through the books
        if (strcmp(livres[i][0], titreRecherche) == 0) {  // Qcompar l titres

            for (int j = i; j < *nombreLivres - 1; j++) {  // Shift books to remove the one found
                strcpy(livres[j][0], livres[j + 1][0]);  // Move title
                strcpy(livres[j][1], livres[j + 1][1]);  // Move author
                strcpy(livres[j][2], livres[j + 1][2]);  // Move price
                strcpy(livres[j][3], livres[j + 1][3]);  // Move quantity
            }
            (*nombreLivres)--;  // Decrease the number of books
            printf("Book removed successfully!\n");  // Book removed successfully
            return;
        }
    }
    printf("This book is not in stock.\n");  // Book not found
}

// Fonction li kat3rd ltotal dyal lktoub
void afficherTotalLivres(char livres[MAX_BOOKS][4][100], int nombreLivres) {
    int total = 0;  // Variable li kat7seb ltotal
    for (int i = 0; i < nombreLivres; i++) {  // Loop through the books
        total += atoi(livres[i][3]);  // Convert quantity to int and add to total
    }
    printf("Total number of books in stock: %d\n", total);  // Print total number of books
}

int main() {
    char livres[MAX_BOOKS][4][100];  // Array to store books
    int nombreLivres = 0;  // Initialize number of books
    int choix;  // Variable li katkhfi lchoix dyal luser

    do {
        printf("\n--- Menu ---\n");  // Display menu
        printf("1. Add a book to stock\n");  // Add book option
        printf("2. Display all books\n");  // Display books option
        printf("3. Search for a book by title\n");  // Search book option
        printf("4. Update quantity\n");  // Update quantity option
        printf("5. Remove a book from stock\n");  // Remove book option
        printf("6. Display total number of books\n");  // Display total option
        printf("7. Exit the program\n");  // Exit option
        printf("What do you want to do? ");  // Prompt for choice
        scanf("%d", &choix);  // Read user choice

        switch (choix) {
            case 1:
                ajouterLivre(livres, &nombreLivres);  // Call function to add book
                break;
            case 2:
                afficherLivres(livres, nombreLivres);  // Call function to display books
                break;
            case 3:
                rechercherLivre(livres, nombreLivres);  // Call function to search for book
                break;
            case 4:
                mettreAJourQuantite(livres, nombreLivres);  // Call function to update quantity
                break;
            case 5:
                supprimerLivre(livres, &nombreLivres);  // Call function to remove book
                break;
            case 6:
                afficherTotalLivres(livres, nombreLivres);  // Call function to display total
                break;
            case 7:
                printf("Goodbye!\n");  // Exit message
                break;
            default:
                printf("Invalid choice!\n");  // Invalid choice message
        }
    } while (choix != 7);  // Repeat until user chooses to exit
    return 0;  // End of program
}