#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure to store book information
typedef struct {
    char title[100];
    char author[100];
    float price;
    int quantity;
} Book;

Book books[MAX_BOOKS];  // Array to store books
int totalBooks = 0;     // Number of books in stock

// Function to add a book to stock
void addBook() {
    if (totalBooks >= MAX_BOOKS) {
        printf("Stock is full, can't add more books.\n");
        return;
    }
    printf("Enter the title of the book: ");
    scanf(" %[^\n]", books[totalBooks].title);  // Read the title
    printf("Enter the author of the book: ");
    scanf(" %[^\n]", books[totalBooks].author);  // Read the author
    printf("Enter the price of the book: ");
    scanf("%f", &books[totalBooks].price);       // Read the price
    printf("Enter the quantity of the book: ");
    scanf("%d", &books[totalBooks].quantity);    // Read the quantity
    totalBooks++;
    printf("Book added successfully!\n");
}

// Function to view all available books
void viewBooks() {
    if (totalBooks == 0) {
        printf("No books in stock.\n");
        return;
    }
    printf("List of available books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Quantity: %d\n", books[i].quantity);
    }
}

// Function to search for a book by its title
void searchBook() {
    char searchTitle[100];
    printf("Enter the title of the book to search: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i].title, searchTitle) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            printf("Quantity: %d\n", books[i].quantity);
            return;
        }
    }
    printf("Book not found.\n");
}

// Function to update the quantity of a book
void updateQuantity() {
    char searchTitle[100];
    int newQuantity;
    printf("Enter the title of the book to update: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i].title, searchTitle) == 0) {
            printf("Enter the new quantity: ");
            scanf("%d", &newQuantity);
            books[i].quantity = newQuantity;
            printf("Quantity updated successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

// Function to remove a book from stock
void removeBook() {
    char searchTitle[100];
    printf("Enter the title of the book to remove: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i].title, searchTitle) == 0) {
            for (int j = i; j < totalBooks - 1; j++) {
                books[j] = books[j + 1];  // Shift the remaining books
            }
            totalBooks--;
            printf("Book removed successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

// Function to view the total number of books in stock
void viewTotalBooks() {
    int totalQuantity = 0;
    for (int i = 0; i < totalBooks; i++) {
        totalQuantity += books[i].quantity;
    }
    printf("Total number of books in stock: %d\n", totalQuantity);
}

// Main function
int main() {
    int choice;
    
    do {
        printf("\n=== Bookstore Stock Management ===\n");
        printf("1. Add a book to stock\n");
        printf("2. View all available books\n");
        printf("3. Search for a book by title\n");
        printf("4. Update the quantity of a book\n");
        printf("5. Remove a book from stock\n");
        printf("6. View total number of books in stock\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                removeBook();
                break;
            case 6:
                viewTotalBooks();
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}