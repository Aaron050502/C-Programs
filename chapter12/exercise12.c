#include <stdio.h>
#define LENGTH 10


void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) {
    int largest, secondLargest;

    int a[LENGTH] = {23, 11, 4, 8, 17, 82, 63, 53, 51, 21};
    find_two_largest(a, LENGTH, &largest, &secondLargest);

    printf("%d %d", largest, secondLargest);


    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
    int *p;

    if (n < 2) {
        return;
    }

    if (*a > *(a + 1)) {
        *largest = *a;
        *second_largest = *(a + 1);
    } else if (*(a + 1) > *a) {
        *largest = *(a + 1);
        *second_largest = *a;
    } else {
        *largest = *second_largest = *a;
    }


    for (p = a + 2; p < a + n; p++) {

        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest) {
            *second_largest = *p;
        }
    }



}