#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("entrez le premier entier: ");
    scanf("%d",&num1);
    
    printf("entrez le deuxième entier: ");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    
    if (num1 == num2){
        sum =3 * sum;
    }
    printf("le rèsultat est : %d\n",sum);
    
    return 0;
}