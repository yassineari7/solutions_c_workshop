#include <stdio.h>

int main() {
    int number;
    
    printf("entrez un nombre:");
    scanf("%d", &number);
    
    if(number % 2 == 0) {
        printf("le nombre %d est pair. \n, ",number);
    }
    else{
        printf("le nombre %d est uN pair. \n,",number);
    return 0;
    }
}