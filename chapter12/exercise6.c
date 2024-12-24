#include <stdio.h>

int sum_array(const int a[], int n);
int sum_array_pointed(const int a[], int n);

int main(void) {
    int array[5] = {10, 20, 30, 40, 50};
    printf("%d %d", sum_array(array, 5), sum_array_pointed(array,5));



    return 0;
}

int sum_array(const int a[], int n) {
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum;
}

int sum_array_pointed(const int a[], int n){

    int sum, *arr;
    sum = 0;
    for (arr = a; arr < a + n; arr++) {
        sum += *arr;
    }   
    return sum;
}