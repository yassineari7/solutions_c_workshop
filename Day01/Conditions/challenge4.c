#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Entrez le coefficient a (non nul) : ");
    scanf("%f", &a);

    printf("Entrez le coefficient b : ");
    scanf("%f", &b);

    printf("Entrez le coefficient c : ");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Il y a deux solutions réelles distinctes : %.2f et %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Il y a une solution réelle double : %.2f\n", root1);
    } else {
        printf("Il n'y a pas de solutions réelles.\n");
    }

    return 0;
}