#include <stdio.h>
#define LENGTH 10

void store_zeroes(int a[], int n);
void store_zeroes_pointed(int a[], int n);

int main(void) {

    int a[LENGTH] = {32, 142 , 65, 12, 53, 45, 61, 31 , 98, 12};
    int b[LENGTH] = {32, 142 , 65, 12, 53, 45, 61, 31 , 98, 12};
    print(a, LENGTH);
    print(b, LENGTH);

    store_zeroes(a, LENGTH);
    print(a, LENGTH);
    store_zeroes_pointed(b, LENGTH);
    print(b, LENGTH);





    return 0;
}

void store_zeroes(int a[], int n) {

    int i;

    for (i = 0; i < n; i++){
        a[i] = 0;
    }
}

void store_zeroes_pointed(int a[], int n){

    int *p;

    for(p = a; p < a + n;) {
        *p++ = 0;
    }
}

void print(int a[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}