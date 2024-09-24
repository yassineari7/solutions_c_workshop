#include <stdio.h>

int main() {
    float c, k;

    printf("Enter the temperature in C: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("The temperature in K is: %.2f\n", k);

    return 0;
}