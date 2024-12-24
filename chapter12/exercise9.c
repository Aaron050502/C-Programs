#include <stdio.h>

double inner_product(const double *a, const double *b, int n);
#define LENGTH 5

int main(void) {

    double a[LENGTH] = {1.2, 2.3, 3.5, 4.7, 5.9};
    double b[LENGTH] = {2.2, 3.3, 4.5, 5.7, 6.9};

    double sum = inner_product(a,b,LENGTH);
    printf("%.2f ", sum);




    return 0;
}

double inner_product(const double *a, const double *b, int n) {
    
    double sum = 0.0;
    double *aP, *bP;
  
    for (aP = a, bP = b; (aP < a + n) && (bP < b + n); aP++, bP++) {
        sum += *aP * *bP; 
        
    }

    return sum;

}