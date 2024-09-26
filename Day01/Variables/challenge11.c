#include <stdio.h>
#include <math.h>

int main() {
    float longueur,largeur, surface;
    
    printf("entrez la longueur du rectangle;");
    scanf("%f",&longueur);
    
    printf("entrez la largeur de rectangle:");
    scanf ("%f", &largeur);
    
    surface = longueur * largeur;
    
    printf("la surface du rectangle est : %.2f\n" , surface);
    
    return 0;
}