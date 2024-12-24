#include <stdio.h>
#define LENGTH 5

int *find_middle(int a[], int n);


int main(void) {

    int a[5] = {1, 2, 3, 4, 5};


}

int *find_middle(int a[], int n) {
    return a + n / 2;
}