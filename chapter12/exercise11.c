#include <stdio.h>

int find_largest(int a[], int n);

int main(void) {

    int array[9] = {13, 23, 2, 54, 36, 95, 49};
    printf("%d ", find_largest(array,9));


    return 0;
}

int find_largest(int a[], int n) {
    int largest = *a;
    int *p;
    for (p = a + 1; p < a + n; p++) {
        if (*p > largest) {
            largest = *p;
        }
    }
    return largest;
}