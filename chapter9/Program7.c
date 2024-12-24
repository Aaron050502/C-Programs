#include <stdio.h>

int power(int x, int n);

int main(void) {

    int x, y;
    printf("Enter values for x and n: ");
    scanf("%d %d", &x, &y);
    printf("%d to the power of %d is: %d ", x, y, power(x,y));

    return 0; 
}

int power(int x, int n) {

    if (n == 0) {
        return 1;
    }


    if (n % 2 == 0) {
        int recursionCall = power(x, n/2);
        return recursionCall * recursionCall;
    } else {
        return x * power(x, n-1);
    }
}