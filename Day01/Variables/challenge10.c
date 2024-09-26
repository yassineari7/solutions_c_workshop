#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;
    printf("enter the radius of the sphere:");
    scanf("%f", &radius);
    
    volume = 1.3333333333333333333 * 3.14159265359 * pow(radius, 3);
    printf("the volume of the sphere is : %.2f\n",volume);
    
    return 0;
}