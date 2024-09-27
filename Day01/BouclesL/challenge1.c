#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N, i;
    for(i = 0; i <= 10; i++)
    {
        N = 4 * i;
        printf("4 * %d = %d \n", i, N);
    }
    return 0;
}
