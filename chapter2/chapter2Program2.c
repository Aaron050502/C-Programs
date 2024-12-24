#include <stdio.h>
#define PI 3.14

int main(void) {
    int radius;
    printf("Enter a radius: ");
    scanf("%d", &radius);
    float sphereVolume = 4.0f / 3.0f * radius * radius * radius;
    printf("%.5f", sphereVolume);

}