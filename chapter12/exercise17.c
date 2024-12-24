#include <stdio.h>
#define LEN 3

int sum_two_dimensional_array(const int a[] [LEN], int n);

int main(void) {
    int arr1[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

    printf("%d", sum_two_dimensional_array(arr1, 3));



    return 0;
}



int sum_two_dimensional_array(const int a[][LEN], int n) {

    const int *p;
    int sum = 0;
    for(p = &a[0][0]; p < &a[0][0] + n * LEN; p++){
        sum += *p;

    }


    return sum;
}
