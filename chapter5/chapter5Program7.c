#include <stdio.h>

int main(void) {
    int a, b, c, d, largest1, smallest1, largest2, smallest2, thelargest, thesmallest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    largest1 = a, smallest1 = b, largest2 = c; smallest2 = d;


    
    if (a < b) {
        largest1 = b;
        smallest1 = a;
    }

    if (c < d) {
        largest2 = d;
        smallest2 = c;
    }

    thelargest = largest1;
    thesmallest = smallest1;

    if (largest1 < largest2) {
        thelargest = largest2;
    }

    if (smallest2 < smallest1) {
        thesmallest = smallest2;
    }

    printf("Largest: %d", thelargest);
    printf("Smallest: %d", thesmallest);

    return 0;
}