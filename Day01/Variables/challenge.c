#include <stdio.h>

int main() {
    
    char nom [50];
    char prénom [50];
    char sexe [50];
    char email[70];
    int âge [89];
    
    printf("entrez votre nom:");
    scanf("%s", nom);
    printf("entrez votre prénom:");
    scanf("%s", prénom);
    printf("entrez votre âge:");
    scanf("%d",&âge);
    printf("entrez votre sexe: ");
    scanf("%s", sexe);
    printf("entrez votre adresse email: ");
    scanf("%s", email);
    printf("Voici les info\n");
    printf("Nom: %s\n",nom);
    printf("Prénom: %s\n",prénom);
    printf("Âge: %d\n",âge);
    printf("Sexe: %s\n",sexe);
    printf("email: %s\n",email);
    
    return 0;
}