#include <stdio.h>
#define LENGTH 7

int largestElement(int a[], int n);
double average(int a[], int n);
int positive(int a[], int n);

int main(void) {

    int a[LENGTH], total;
    a[0] = 2;
    a[1] = -3;
    a[2] = 13;
    a[3] = -7;
    a[4] = -5;
    a[5] = 9;
    a[6] = 11;


    printf("%d %f %d", largestElement(a,LENGTH),average(a,LENGTH), positive(a,LENGTH));


    return 0;
}

int largestElement(int a[], int n) {
    int largest = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    return largest;
}

double average(int a[], int n) {
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    sum /= n;
    return sum;
}


int positive(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if(a[i] > 0) {
            count++;
        }
    }

    return count;



}