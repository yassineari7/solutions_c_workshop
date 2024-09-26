#include <stdio.h>

int main() {
    int age, carType, accidents;
    float basePremium, finalPremium;

    printf("Enter the base premium amount: ");
    scanf("%f", &basePremium);

    printf("Enter the age of the driver (in years): ");
    scanf("%d", &age);

    printf("Enter the type of car (1 for sports, 2 for utility, 3 for family): ");
    scanf("%d", &carType);

    printf("Enter the number of accidents in the last 5 years: ");
    scanf("%d", &accidents);

    if (age < 25) {
        finalPremium = basePremium * 1.5;
    } else if (age <= 65) {
        finalPremium = basePremium;
    } else {
        finalPremium = basePremium * 1.2;
    }

    if (carType == 1) {
        finalPremium *= 2;
    } else if (carType == 2) {
        finalPremium *= 1.2;
    } else if (carType == 3) {
        finalPremium *= 1.1;
    }

    if (accidents > 1) {
        finalPremium *= 1.3;
    }

    printf("The calculated insurance premium is: %.2f\n", finalPremium);

    return 0;
}