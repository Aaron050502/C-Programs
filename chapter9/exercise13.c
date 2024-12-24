#include <stdio.h>


double inner_product(double a[], double b[], int n);

int main(void) {


    double a1[] = {1.0, 2.0, 3.0};
    double b1[] = {4.0, 5.0, 6.0};
    int n1 = 3;
    printf("Test Case 1: ");
    printf("Expected: 32.0, Got: %.2f\n", inner_product(a1, b1, n1));

    return 0;
}


double inner_product(double a[], double b[], int n){
   
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    return sum;
}

