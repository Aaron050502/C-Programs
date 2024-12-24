#include <stdio.h>
#define LENGTH 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    double sum, avg, *sumP, *avpP;
    sumP = &sum;
    avpP = &avg;
    double a[LENGTH] = {1.0, 2.1, 3.2, 4.3, 5.4};
    avg_sum(a, LENGTH, avpP, sumP);

    printf("sum: %f avg: %f", sum, avg);






    return 0;
}


void avg_sum(double a[], int n, double *avg, double *sum) {
   int i;

   *sum = 0.0;
   for (i = 0; i < n; i++) {
        *sum += a[i];

   }
   *avg = *sum / n;
}