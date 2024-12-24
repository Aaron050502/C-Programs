#include <stdio.h>
#define LENGTH 7


void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    int a[LENGTH] = {5, 13, 7, 1, 8, 9, 2};
    int largest, secondLargest;
    find_two_largest(a, LENGTH, &largest, &secondLargest);
    printf("Largest:%d Second Largest:%d ", largest, secondLargest);


    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){

    *largest = a[0];
    *second_largest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
        




}