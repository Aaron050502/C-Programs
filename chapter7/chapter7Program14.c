#include <stdio.h>
#include <math.h>


int main(void) {
    double x;
    double y = 1;
    double oldY;
    double quotient;
    double average;
    int round = 1;

    printf("Enter a positive number");
    scanf("%lf", &x);
    
    do {
        printf("ROUND %d: ", round);
        quotient = x / y;
        average = (y + quotient) / 2;
        oldY = y;
        printf("x:%lf y:%lf x/y:%lf average:%lf\n", x, y, quotient, average);
        y = average;
        
    } while (fabs(y-oldY) >= .00001 * y);


    

    return 0;
}