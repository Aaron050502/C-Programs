#include <stdio.h>
#include <stdbool.h>
#define LENGTH 5

bool search(const int a[], int n, int key);

int main(void) {

    int x = 4, y = 5;
    int a[LENGTH] = {32, 13, 66, 7, 22};
    printf("%d", search(a,LENGTH, --x - y));





}

bool search(const int a[], int n, int key) {

    int *p;

    for(p = a; p < a + n; p++) {
        if (*p == key){
            return true;
        }
    }
    return false;
}