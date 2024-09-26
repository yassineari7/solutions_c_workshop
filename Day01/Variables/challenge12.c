#include <stdio.h>
#include <math.h>

int main() {
    int nombre;
    int milliers, centaines, dizaines, unités;
    
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);
    
    milliers = nombre / 1000;
    centaines = (nombre / 100) % 10;
    dizaines = (nombre / 10) % 10;
    unités = nombre % 10;
    
    printf("L'inverse du nombre est : %d%d%d%d\n", unités, dizaines, centaines, milliers);
    return 0;
}
