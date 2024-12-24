#include <stdio.h>


int find_largest(int a[], int n);

int main(void) {

    int largest;

    int temperatures[7][24] = {

    {27, 28, 29, 26, 25, 27, 30, 29, 28, 31, 26, 28, 27, 29, 31, 26, 25, 29, 28, 30, 27, 26, 25, 28},
    {30, 28, 26, 29, 27, 31, 26, 27, 29, 30, 28, 29, 27, 28, 29, 25, 26, 28, 27, 31, 26, 29, 28, 27},
    {28, 30, 29, 27, 28, 29, 26, 25, 30, 27, 28, 29, 26, 27, 30, 28, 29, 31, 26, 25, 27, 30, 28, 27},
    {26, 29, 31, 11, 25, 30, 28, 29, 31, 26, 25, 28, 30, 27, 26, 29, 28, 27, 31, 26, 28, 29, 30, 27},
    {26, 27, 30, 28, 31, 26, 29, 27, 30, 28, 29, 31, 26, 27, 25, 29, 27, 28, 30, 27, 26, 25, 28, 29},
    {25, 30, 28, 27, 29, 31, 33, 34, 29, 26, 25, 27, 30, 28, 29, 11, 26, 28, 29, 30, 27, 29, 28, 27},
    {29, 26, 28, 31, 27, 29, 30, 26, 27, 29, 28, 27, 30, 28, 26, 27, 31, 29, 28, 26, 27, 30, 48, 27}
    
    };

    
    largest = find_largest(temperatures[0], 24);
    for (int i = 1; i < 7; i++) {
        int rowLargest = find_largest(temperatures[i],24);
        if (largest < rowLargest){
            largest = rowLargest;
        }
    }

    printf("HIGHEST TEMPERATUR: %d", largest);


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