#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int searchElement;
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("L'élément %d est présent dans le tableau.\n", searchElement);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", searchElement);
    }

    return 0;
}