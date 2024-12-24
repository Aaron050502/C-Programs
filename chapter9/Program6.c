#include <stdio.h>


int poly(int x);

int main(void) {
    int x;
    printf("Enter a value for x: ");
    scanf("%d ", &x);
    int result;
    result = poly(x);
    printf("The calculated value for the polynomial is: %d", result );





    return 0;
}


int poly(int x) {
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}
