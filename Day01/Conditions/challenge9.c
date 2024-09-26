#include <stdio.h>

int main() {
    char ch;
    printf("entrez un caractère: ");
    scanf("%c", &ch);
    
    if ((ch >= 'a'&& ch <= 'z') || (ch >= 'A' && ch <= 'z')) 
        if (ch >= 'a' && 'z'){
            printf("le caractère '%c' est une lettre minuscule.\n", ch);
        }else { 
            printf("le caractère '%c' est une lettre minuscule.\n", ch);
            
        }else {
            printf("le caractère '%c' n'est pas un alphabet.\n", ch);
        }
        return 0;
}