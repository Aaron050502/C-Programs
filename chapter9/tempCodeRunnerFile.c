#include <stdio.h>
#define LENGTH 10


void selection_sort(int a[], int n);

int main(void){
    int array[LENGTH];
    printf("Enter a series of integers: ");
    
    for (int i = 0; i < LENGTH; i++) {
        scanf(" %d", &array[i]);
    }

    for (int i = 0; i < LENGTH; i++) {
        printf("%d ", array[i]);
    }

    selection_sort(array, LENGTH);


    for (int i = 0; i < LENGTH; i++) {
        printf("%d ", array[i]);
    }



}

void selection_sort(int a[], int n) {
    
    if (n <= 1) {
        return;
    }

    int maxIndex;

    for (int i = 1 ; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[n - 1];
    a[n - 1] = temp;
    selection_sort(a, n - 1);
}