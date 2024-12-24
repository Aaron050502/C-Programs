#include <stdio.h>

int main(void) {
    int x, xPoly;
    printf("Enter an value");
    scanf("%d", &x);
    xPoly = ((((3 * x + 2 )* x - 5)* x - 1) * x + 7) * x - 6;
    printf("Polynomial: %d", xPoly);

}