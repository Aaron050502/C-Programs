#include <stdio.h>


int *find_largest(int a[], int n);

void print(int a[], int n);

int main(void) {

    int *pointer;


    int arr[7] = {12, 23, 34, 45, 56, 67, 78}; 
    print(arr, 7);
    pointer = find_largest(arr, 7);
    *pointer = 4;
    print(arr, 7);
    pointer = find_largest(arr, 7);
    *pointer = 11;
    print(arr, 7);



    return 0;
}


int *find_largest(int a[], int n){
    int largestIndex = 0;


    for (int i = 1; i < n; i++) {
        if (a[i] > a[largestIndex]) {
            largestIndex = i;
        }
    }

    return &a[largestIndex];
}

void print(int a[], int n) {
      for (int i = 0; i < 7; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
}